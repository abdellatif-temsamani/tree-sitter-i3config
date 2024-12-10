local M = {}

function M.start()
    local parser_config = require "nvim-treesitter.parsers".get_parser_configs()
    ---@diagnostic disable-next-line: inject-field
    parser_config.i3config = {
        install_info = {
            url = vim.fn.getenv("HOME") .. "/programming/twitch/tree-sitter-i3config",
            files = { "src/parser.c" },
        },
        filetype = "i3config",
    }
end

function M.debugging()
    local autocmd = vim.api.nvim_create_autocmd
    local autogroup = vim.api.nvim_create_augroup
    local group = autogroup("I3CONFIG", { clear = true })

    autocmd("BufReadPost",
        {
            group = group,
            pattern = { "config" },
            callback = function()
                vim.cmd [[InspectTree]]
                vim.api.nvim_feedkeys(vim.api.nvim_replace_termcodes("<C-w>h", true, false, true), "n", false)
            end
        })

    autocmd("BufWritePost",
        {
            group = group,
            pattern = { "grammar.js" },
            callback = function()
                local obj = vim.system({ 'tree-sitter', 'generate', }, { text = true }):wait()

                if obj.code == 0 then
                    vim.notify("treesitter parser generated", 2, { title = "I3 Config" })
                else
                    vim.notify(obj.stderr, 4, { title = "I3 Config" })
                end
            end
        })
end

function M.setup()
    M.start()
end

return M
