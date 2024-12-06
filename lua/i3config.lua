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

function M.setup()
    local autocmd = vim.api.nvim_create_autocmd
    local autogroup = vim.api.nvim_create_augroup

    local group = autogroup("I3CONFIG", { clear = true })

    autocmd("FileType",
        {
            group = group,
            pattern = { "i3config" },
            callback = function()
                M.start()
            end
        })
end

return M
