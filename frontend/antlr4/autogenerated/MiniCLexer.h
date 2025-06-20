
// Generated from MiniC.g4 by ANTLR 4.12.0

#pragma once


#include "antlr4-runtime.h"




class  MiniCLexer : public antlr4::Lexer {
public:
  enum {
    LINE_COMMENT = 1, BLOCK_COMMENT = 2, T_L_PAREN = 3, T_R_PAREN = 4, T_SEMICOLON = 5, 
    T_L_BRACE = 6, T_R_BRACE = 7, T_L_BRACKET = 8, T_R_BRACKET = 9, T_ASSIGN = 10, 
    T_COMMA = 11, T_ADD = 12, T_SUB = 13, T_MUL = 14, T_DIV = 15, T_MOD = 16, 
    T_LT = 17, T_GT = 18, T_LE = 19, T_GE = 20, T_EQ = 21, T_NE = 22, T_AND = 23, 
    T_OR = 24, T_NOT = 25, T_IF = 26, T_ELSE = 27, T_WHILE = 28, T_BREAK = 29, 
    T_CONTINUE = 30, T_TRUE = 31, T_FALSE = 32, T_RETURN = 33, T_INT = 34, 
    T_VOID = 35, T_ID = 36, T_OCTAL = 37, T_HEX = 38, T_DIGIT = 39, WS = 40
  };

  explicit MiniCLexer(antlr4::CharStream *input);

  ~MiniCLexer() override;


  std::string getGrammarFileName() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const std::vector<std::string>& getChannelNames() const override;

  const std::vector<std::string>& getModeNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;

  const antlr4::atn::ATN& getATN() const override;

  // By default the static state used to implement the lexer is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:

  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

};

