package tree_sitter_embedded_template_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-embedded_template"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_embedded_template.Language())
	if language == nil {
		t.Errorf("Error loading ERB/EJS grammar")
	}
}
