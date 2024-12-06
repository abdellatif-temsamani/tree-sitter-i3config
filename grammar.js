/**
 * @file parser for i3wm parser
 * @author abdellatif-temsamani <contact@abdellatif.dev>
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
    name: "i3config",

    rules: {
        source_file: ($) => repeat1($.statement),

        // A statement can be a comment, a binding, a command, or an assign statement
        statement: ($) => choice($.comment),

        // comment //
        comment: () => token(seq("#", /.*/)),
    },
});
