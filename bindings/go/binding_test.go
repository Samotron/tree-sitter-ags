package tree_sitter_ags_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_ags "github.com/tree-sitter/tree-sitter-ags/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_ags.Language())
	if language == nil {
		t.Errorf("Error loading Ags grammar")
	}
}
