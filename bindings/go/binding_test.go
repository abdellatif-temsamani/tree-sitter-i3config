package tree_sitter_i3config_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_i3config "github.com/abdellatif-temsamani/i3-lsp/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_i3config.Language())
	if language == nil {
		t.Errorf("Error loading I3Config grammar")
	}
}
