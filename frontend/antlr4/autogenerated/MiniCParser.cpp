
// Generated from MiniC.g4 by ANTLR 4.12.0


#include "MiniCVisitor.h"

#include "MiniCParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct MiniCParserStaticData final {
  MiniCParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  MiniCParserStaticData(const MiniCParserStaticData&) = delete;
  MiniCParserStaticData(MiniCParserStaticData&&) = delete;
  MiniCParserStaticData& operator=(const MiniCParserStaticData&) = delete;
  MiniCParserStaticData& operator=(MiniCParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag minicParserOnceFlag;
MiniCParserStaticData *minicParserStaticData = nullptr;

void minicParserInitialize() {
  assert(minicParserStaticData == nullptr);
  auto staticData = std::make_unique<MiniCParserStaticData>(
    std::vector<std::string>{
      "compileUnit", "funcDef", "funcReturnType", "formalParamList", "formalParam", 
      "formalArrayDim", "block", "blockItemList", "blockItem", "varDecl", 
      "arrayDim", "varDef", "basicType", "statement", "expr", "logicalOrExp", 
      "logicalAndExp", "equalityExp", "relExp", "addExp", "mulExp", "logicalOrOp", 
      "logicalAndOp", "equalityOp", "relOp", "addOp", "mulOp", "unaryExp", 
      "primaryExp", "realParamList", "lVal"
    },
    std::vector<std::string>{
      "", "", "", "'('", "')'", "';'", "'{'", "'}'", "'['", "']'", "'='", 
      "','", "'+'", "'-'", "'*'", "'/'", "'%'", "'<'", "'>'", "'<='", "'>='", 
      "'=='", "'!='", "'&&'", "'||'", "'!'", "'if'", "'else'", "'while'", 
      "'break'", "'continue'", "'true'", "'false'", "'return'", "'int'", 
      "'void'"
    },
    std::vector<std::string>{
      "", "LINE_COMMENT", "BLOCK_COMMENT", "T_L_PAREN", "T_R_PAREN", "T_SEMICOLON", 
      "T_L_BRACE", "T_R_BRACE", "T_L_BRACKET", "T_R_BRACKET", "T_ASSIGN", 
      "T_COMMA", "T_ADD", "T_SUB", "T_MUL", "T_DIV", "T_MOD", "T_LT", "T_GT", 
      "T_LE", "T_GE", "T_EQ", "T_NE", "T_AND", "T_OR", "T_NOT", "T_IF", 
      "T_ELSE", "T_WHILE", "T_BREAK", "T_CONTINUE", "T_TRUE", "T_FALSE", 
      "T_RETURN", "T_INT", "T_VOID", "T_ID", "T_OCTAL", "T_HEX", "T_DIGIT", 
      "WS"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,40,301,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,7,
  	28,2,29,7,29,2,30,7,30,1,0,1,0,5,0,65,8,0,10,0,12,0,68,9,0,1,0,1,0,1,
  	1,1,1,1,1,1,1,3,1,76,8,1,1,1,1,1,1,1,1,2,1,2,3,2,83,8,2,1,3,1,3,1,3,5,
  	3,88,8,3,10,3,12,3,91,9,3,1,4,1,4,1,4,5,4,96,8,4,10,4,12,4,99,9,4,1,5,
  	1,5,3,5,103,8,5,1,5,1,5,1,6,1,6,3,6,109,8,6,1,6,1,6,1,7,4,7,114,8,7,11,
  	7,12,7,115,1,8,1,8,3,8,120,8,8,1,9,1,9,1,9,1,9,5,9,126,8,9,10,9,12,9,
  	129,9,9,1,9,1,9,1,10,1,10,1,10,1,10,1,11,1,11,1,11,3,11,140,8,11,1,11,
  	1,11,4,11,144,8,11,11,11,12,11,145,3,11,148,8,11,1,12,1,12,1,13,1,13,
  	3,13,154,8,13,1,13,1,13,1,13,1,13,1,13,1,13,1,13,1,13,3,13,164,8,13,1,
  	13,1,13,1,13,1,13,1,13,1,13,1,13,1,13,1,13,1,13,1,13,1,13,1,13,1,13,1,
  	13,1,13,1,13,1,13,1,13,1,13,1,13,1,13,1,13,1,13,1,13,3,13,191,8,13,1,
  	14,1,14,1,15,1,15,1,15,1,15,5,15,199,8,15,10,15,12,15,202,9,15,1,16,1,
  	16,1,16,1,16,5,16,208,8,16,10,16,12,16,211,9,16,1,17,1,17,1,17,1,17,5,
  	17,217,8,17,10,17,12,17,220,9,17,1,18,1,18,1,18,1,18,5,18,226,8,18,10,
  	18,12,18,229,9,18,1,19,1,19,1,19,1,19,5,19,235,8,19,10,19,12,19,238,9,
  	19,1,20,1,20,1,20,1,20,5,20,244,8,20,10,20,12,20,247,9,20,1,21,1,21,1,
  	22,1,22,1,23,1,23,1,24,1,24,1,25,1,25,1,26,1,26,1,27,1,27,1,27,1,27,1,
  	27,1,27,1,27,1,27,3,27,269,8,27,1,27,3,27,272,8,27,1,28,1,28,1,28,1,28,
  	1,28,1,28,1,28,1,28,1,28,1,28,3,28,284,8,28,1,29,1,29,1,29,5,29,289,8,
  	29,10,29,12,29,292,9,29,1,30,1,30,5,30,296,8,30,10,30,12,30,299,9,30,
  	1,30,0,0,31,0,2,4,6,8,10,12,14,16,18,20,22,24,26,28,30,32,34,36,38,40,
  	42,44,46,48,50,52,54,56,58,60,0,5,2,0,36,36,39,39,1,0,21,22,1,0,17,20,
  	1,0,12,13,1,0,14,16,311,0,66,1,0,0,0,2,71,1,0,0,0,4,82,1,0,0,0,6,84,1,
  	0,0,0,8,92,1,0,0,0,10,100,1,0,0,0,12,106,1,0,0,0,14,113,1,0,0,0,16,119,
  	1,0,0,0,18,121,1,0,0,0,20,132,1,0,0,0,22,147,1,0,0,0,24,149,1,0,0,0,26,
  	190,1,0,0,0,28,192,1,0,0,0,30,194,1,0,0,0,32,203,1,0,0,0,34,212,1,0,0,
  	0,36,221,1,0,0,0,38,230,1,0,0,0,40,239,1,0,0,0,42,248,1,0,0,0,44,250,
  	1,0,0,0,46,252,1,0,0,0,48,254,1,0,0,0,50,256,1,0,0,0,52,258,1,0,0,0,54,
  	271,1,0,0,0,56,283,1,0,0,0,58,285,1,0,0,0,60,293,1,0,0,0,62,65,3,2,1,
  	0,63,65,3,18,9,0,64,62,1,0,0,0,64,63,1,0,0,0,65,68,1,0,0,0,66,64,1,0,
  	0,0,66,67,1,0,0,0,67,69,1,0,0,0,68,66,1,0,0,0,69,70,5,0,0,1,70,1,1,0,
  	0,0,71,72,3,4,2,0,72,73,5,36,0,0,73,75,5,3,0,0,74,76,3,6,3,0,75,74,1,
  	0,0,0,75,76,1,0,0,0,76,77,1,0,0,0,77,78,5,4,0,0,78,79,3,12,6,0,79,3,1,
  	0,0,0,80,83,5,35,0,0,81,83,3,24,12,0,82,80,1,0,0,0,82,81,1,0,0,0,83,5,
  	1,0,0,0,84,89,3,8,4,0,85,86,5,11,0,0,86,88,3,8,4,0,87,85,1,0,0,0,88,91,
  	1,0,0,0,89,87,1,0,0,0,89,90,1,0,0,0,90,7,1,0,0,0,91,89,1,0,0,0,92,93,
  	3,24,12,0,93,97,5,36,0,0,94,96,3,10,5,0,95,94,1,0,0,0,96,99,1,0,0,0,97,
  	95,1,0,0,0,97,98,1,0,0,0,98,9,1,0,0,0,99,97,1,0,0,0,100,102,5,8,0,0,101,
  	103,7,0,0,0,102,101,1,0,0,0,102,103,1,0,0,0,103,104,1,0,0,0,104,105,5,
  	9,0,0,105,11,1,0,0,0,106,108,5,6,0,0,107,109,3,14,7,0,108,107,1,0,0,0,
  	108,109,1,0,0,0,109,110,1,0,0,0,110,111,5,7,0,0,111,13,1,0,0,0,112,114,
  	3,16,8,0,113,112,1,0,0,0,114,115,1,0,0,0,115,113,1,0,0,0,115,116,1,0,
  	0,0,116,15,1,0,0,0,117,120,3,26,13,0,118,120,3,18,9,0,119,117,1,0,0,0,
  	119,118,1,0,0,0,120,17,1,0,0,0,121,122,3,24,12,0,122,127,3,22,11,0,123,
  	124,5,11,0,0,124,126,3,22,11,0,125,123,1,0,0,0,126,129,1,0,0,0,127,125,
  	1,0,0,0,127,128,1,0,0,0,128,130,1,0,0,0,129,127,1,0,0,0,130,131,5,5,0,
  	0,131,19,1,0,0,0,132,133,5,8,0,0,133,134,3,28,14,0,134,135,5,9,0,0,135,
  	21,1,0,0,0,136,139,5,36,0,0,137,138,5,10,0,0,138,140,3,28,14,0,139,137,
  	1,0,0,0,139,140,1,0,0,0,140,148,1,0,0,0,141,143,5,36,0,0,142,144,3,20,
  	10,0,143,142,1,0,0,0,144,145,1,0,0,0,145,143,1,0,0,0,145,146,1,0,0,0,
  	146,148,1,0,0,0,147,136,1,0,0,0,147,141,1,0,0,0,148,23,1,0,0,0,149,150,
  	5,34,0,0,150,25,1,0,0,0,151,153,5,33,0,0,152,154,3,28,14,0,153,152,1,
  	0,0,0,153,154,1,0,0,0,154,155,1,0,0,0,155,191,5,5,0,0,156,157,3,60,30,
  	0,157,158,5,10,0,0,158,159,3,28,14,0,159,160,5,5,0,0,160,191,1,0,0,0,
  	161,191,3,12,6,0,162,164,3,28,14,0,163,162,1,0,0,0,163,164,1,0,0,0,164,
  	165,1,0,0,0,165,191,5,5,0,0,166,167,5,26,0,0,167,168,5,3,0,0,168,169,
  	3,28,14,0,169,170,5,4,0,0,170,171,3,26,13,0,171,191,1,0,0,0,172,173,5,
  	26,0,0,173,174,5,3,0,0,174,175,3,28,14,0,175,176,5,4,0,0,176,177,3,26,
  	13,0,177,178,5,27,0,0,178,179,3,26,13,0,179,191,1,0,0,0,180,181,5,28,
  	0,0,181,182,5,3,0,0,182,183,3,28,14,0,183,184,5,4,0,0,184,185,3,26,13,
  	0,185,191,1,0,0,0,186,187,5,29,0,0,187,191,5,5,0,0,188,189,5,30,0,0,189,
  	191,5,5,0,0,190,151,1,0,0,0,190,156,1,0,0,0,190,161,1,0,0,0,190,163,1,
  	0,0,0,190,166,1,0,0,0,190,172,1,0,0,0,190,180,1,0,0,0,190,186,1,0,0,0,
  	190,188,1,0,0,0,191,27,1,0,0,0,192,193,3,30,15,0,193,29,1,0,0,0,194,200,
  	3,32,16,0,195,196,3,42,21,0,196,197,3,32,16,0,197,199,1,0,0,0,198,195,
  	1,0,0,0,199,202,1,0,0,0,200,198,1,0,0,0,200,201,1,0,0,0,201,31,1,0,0,
  	0,202,200,1,0,0,0,203,209,3,34,17,0,204,205,3,44,22,0,205,206,3,34,17,
  	0,206,208,1,0,0,0,207,204,1,0,0,0,208,211,1,0,0,0,209,207,1,0,0,0,209,
  	210,1,0,0,0,210,33,1,0,0,0,211,209,1,0,0,0,212,218,3,36,18,0,213,214,
  	3,46,23,0,214,215,3,36,18,0,215,217,1,0,0,0,216,213,1,0,0,0,217,220,1,
  	0,0,0,218,216,1,0,0,0,218,219,1,0,0,0,219,35,1,0,0,0,220,218,1,0,0,0,
  	221,227,3,38,19,0,222,223,3,48,24,0,223,224,3,38,19,0,224,226,1,0,0,0,
  	225,222,1,0,0,0,226,229,1,0,0,0,227,225,1,0,0,0,227,228,1,0,0,0,228,37,
  	1,0,0,0,229,227,1,0,0,0,230,236,3,40,20,0,231,232,3,50,25,0,232,233,3,
  	40,20,0,233,235,1,0,0,0,234,231,1,0,0,0,235,238,1,0,0,0,236,234,1,0,0,
  	0,236,237,1,0,0,0,237,39,1,0,0,0,238,236,1,0,0,0,239,245,3,54,27,0,240,
  	241,3,52,26,0,241,242,3,54,27,0,242,244,1,0,0,0,243,240,1,0,0,0,244,247,
  	1,0,0,0,245,243,1,0,0,0,245,246,1,0,0,0,246,41,1,0,0,0,247,245,1,0,0,
  	0,248,249,5,24,0,0,249,43,1,0,0,0,250,251,5,23,0,0,251,45,1,0,0,0,252,
  	253,7,1,0,0,253,47,1,0,0,0,254,255,7,2,0,0,255,49,1,0,0,0,256,257,7,3,
  	0,0,257,51,1,0,0,0,258,259,7,4,0,0,259,53,1,0,0,0,260,261,5,25,0,0,261,
  	272,3,54,27,0,262,263,5,13,0,0,263,272,3,54,27,0,264,272,3,56,28,0,265,
  	266,5,36,0,0,266,268,5,3,0,0,267,269,3,58,29,0,268,267,1,0,0,0,268,269,
  	1,0,0,0,269,270,1,0,0,0,270,272,5,4,0,0,271,260,1,0,0,0,271,262,1,0,0,
  	0,271,264,1,0,0,0,271,265,1,0,0,0,272,55,1,0,0,0,273,274,5,3,0,0,274,
  	275,3,28,14,0,275,276,5,4,0,0,276,284,1,0,0,0,277,284,5,39,0,0,278,284,
  	5,37,0,0,279,284,5,38,0,0,280,284,5,31,0,0,281,284,5,32,0,0,282,284,3,
  	60,30,0,283,273,1,0,0,0,283,277,1,0,0,0,283,278,1,0,0,0,283,279,1,0,0,
  	0,283,280,1,0,0,0,283,281,1,0,0,0,283,282,1,0,0,0,284,57,1,0,0,0,285,
  	290,3,28,14,0,286,287,5,11,0,0,287,289,3,28,14,0,288,286,1,0,0,0,289,
  	292,1,0,0,0,290,288,1,0,0,0,290,291,1,0,0,0,291,59,1,0,0,0,292,290,1,
  	0,0,0,293,297,5,36,0,0,294,296,3,20,10,0,295,294,1,0,0,0,296,299,1,0,
  	0,0,297,295,1,0,0,0,297,298,1,0,0,0,298,61,1,0,0,0,299,297,1,0,0,0,28,
  	64,66,75,82,89,97,102,108,115,119,127,139,145,147,153,163,190,200,209,
  	218,227,236,245,268,271,283,290,297
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  minicParserStaticData = staticData.release();
}

}

MiniCParser::MiniCParser(TokenStream *input) : MiniCParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

MiniCParser::MiniCParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  MiniCParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *minicParserStaticData->atn, minicParserStaticData->decisionToDFA, minicParserStaticData->sharedContextCache, options);
}

MiniCParser::~MiniCParser() {
  delete _interpreter;
}

const atn::ATN& MiniCParser::getATN() const {
  return *minicParserStaticData->atn;
}

std::string MiniCParser::getGrammarFileName() const {
  return "MiniC.g4";
}

const std::vector<std::string>& MiniCParser::getRuleNames() const {
  return minicParserStaticData->ruleNames;
}

const dfa::Vocabulary& MiniCParser::getVocabulary() const {
  return minicParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView MiniCParser::getSerializedATN() const {
  return minicParserStaticData->serializedATN;
}


//----------------- CompileUnitContext ------------------------------------------------------------------

MiniCParser::CompileUnitContext::CompileUnitContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MiniCParser::CompileUnitContext::EOF() {
  return getToken(MiniCParser::EOF, 0);
}

std::vector<MiniCParser::FuncDefContext *> MiniCParser::CompileUnitContext::funcDef() {
  return getRuleContexts<MiniCParser::FuncDefContext>();
}

MiniCParser::FuncDefContext* MiniCParser::CompileUnitContext::funcDef(size_t i) {
  return getRuleContext<MiniCParser::FuncDefContext>(i);
}

std::vector<MiniCParser::VarDeclContext *> MiniCParser::CompileUnitContext::varDecl() {
  return getRuleContexts<MiniCParser::VarDeclContext>();
}

MiniCParser::VarDeclContext* MiniCParser::CompileUnitContext::varDecl(size_t i) {
  return getRuleContext<MiniCParser::VarDeclContext>(i);
}


size_t MiniCParser::CompileUnitContext::getRuleIndex() const {
  return MiniCParser::RuleCompileUnit;
}


std::any MiniCParser::CompileUnitContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MiniCVisitor*>(visitor))
    return parserVisitor->visitCompileUnit(this);
  else
    return visitor->visitChildren(this);
}

MiniCParser::CompileUnitContext* MiniCParser::compileUnit() {
  CompileUnitContext *_localctx = _tracker.createInstance<CompileUnitContext>(_ctx, getState());
  enterRule(_localctx, 0, MiniCParser::RuleCompileUnit);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(66);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == MiniCParser::T_INT

    || _la == MiniCParser::T_VOID) {
      setState(64);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx)) {
      case 1: {
        setState(62);
        funcDef();
        break;
      }

      case 2: {
        setState(63);
        varDecl();
        break;
      }

      default:
        break;
      }
      setState(68);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(69);
    match(MiniCParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FuncDefContext ------------------------------------------------------------------

MiniCParser::FuncDefContext::FuncDefContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MiniCParser::FuncReturnTypeContext* MiniCParser::FuncDefContext::funcReturnType() {
  return getRuleContext<MiniCParser::FuncReturnTypeContext>(0);
}

tree::TerminalNode* MiniCParser::FuncDefContext::T_ID() {
  return getToken(MiniCParser::T_ID, 0);
}

tree::TerminalNode* MiniCParser::FuncDefContext::T_L_PAREN() {
  return getToken(MiniCParser::T_L_PAREN, 0);
}

tree::TerminalNode* MiniCParser::FuncDefContext::T_R_PAREN() {
  return getToken(MiniCParser::T_R_PAREN, 0);
}

MiniCParser::BlockContext* MiniCParser::FuncDefContext::block() {
  return getRuleContext<MiniCParser::BlockContext>(0);
}

MiniCParser::FormalParamListContext* MiniCParser::FuncDefContext::formalParamList() {
  return getRuleContext<MiniCParser::FormalParamListContext>(0);
}


size_t MiniCParser::FuncDefContext::getRuleIndex() const {
  return MiniCParser::RuleFuncDef;
}


std::any MiniCParser::FuncDefContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MiniCVisitor*>(visitor))
    return parserVisitor->visitFuncDef(this);
  else
    return visitor->visitChildren(this);
}

MiniCParser::FuncDefContext* MiniCParser::funcDef() {
  FuncDefContext *_localctx = _tracker.createInstance<FuncDefContext>(_ctx, getState());
  enterRule(_localctx, 2, MiniCParser::RuleFuncDef);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(71);
    funcReturnType();
    setState(72);
    match(MiniCParser::T_ID);
    setState(73);
    match(MiniCParser::T_L_PAREN);
    setState(75);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == MiniCParser::T_INT) {
      setState(74);
      formalParamList();
    }
    setState(77);
    match(MiniCParser::T_R_PAREN);
    setState(78);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FuncReturnTypeContext ------------------------------------------------------------------

MiniCParser::FuncReturnTypeContext::FuncReturnTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MiniCParser::FuncReturnTypeContext::T_VOID() {
  return getToken(MiniCParser::T_VOID, 0);
}

MiniCParser::BasicTypeContext* MiniCParser::FuncReturnTypeContext::basicType() {
  return getRuleContext<MiniCParser::BasicTypeContext>(0);
}


size_t MiniCParser::FuncReturnTypeContext::getRuleIndex() const {
  return MiniCParser::RuleFuncReturnType;
}


std::any MiniCParser::FuncReturnTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MiniCVisitor*>(visitor))
    return parserVisitor->visitFuncReturnType(this);
  else
    return visitor->visitChildren(this);
}

MiniCParser::FuncReturnTypeContext* MiniCParser::funcReturnType() {
  FuncReturnTypeContext *_localctx = _tracker.createInstance<FuncReturnTypeContext>(_ctx, getState());
  enterRule(_localctx, 4, MiniCParser::RuleFuncReturnType);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(82);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MiniCParser::T_VOID: {
        enterOuterAlt(_localctx, 1);
        setState(80);
        match(MiniCParser::T_VOID);
        break;
      }

      case MiniCParser::T_INT: {
        enterOuterAlt(_localctx, 2);
        setState(81);
        basicType();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FormalParamListContext ------------------------------------------------------------------

MiniCParser::FormalParamListContext::FormalParamListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<MiniCParser::FormalParamContext *> MiniCParser::FormalParamListContext::formalParam() {
  return getRuleContexts<MiniCParser::FormalParamContext>();
}

MiniCParser::FormalParamContext* MiniCParser::FormalParamListContext::formalParam(size_t i) {
  return getRuleContext<MiniCParser::FormalParamContext>(i);
}

std::vector<tree::TerminalNode *> MiniCParser::FormalParamListContext::T_COMMA() {
  return getTokens(MiniCParser::T_COMMA);
}

tree::TerminalNode* MiniCParser::FormalParamListContext::T_COMMA(size_t i) {
  return getToken(MiniCParser::T_COMMA, i);
}


size_t MiniCParser::FormalParamListContext::getRuleIndex() const {
  return MiniCParser::RuleFormalParamList;
}


std::any MiniCParser::FormalParamListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MiniCVisitor*>(visitor))
    return parserVisitor->visitFormalParamList(this);
  else
    return visitor->visitChildren(this);
}

MiniCParser::FormalParamListContext* MiniCParser::formalParamList() {
  FormalParamListContext *_localctx = _tracker.createInstance<FormalParamListContext>(_ctx, getState());
  enterRule(_localctx, 6, MiniCParser::RuleFormalParamList);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(84);
    formalParam();
    setState(89);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == MiniCParser::T_COMMA) {
      setState(85);
      match(MiniCParser::T_COMMA);
      setState(86);
      formalParam();
      setState(91);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FormalParamContext ------------------------------------------------------------------

MiniCParser::FormalParamContext::FormalParamContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MiniCParser::BasicTypeContext* MiniCParser::FormalParamContext::basicType() {
  return getRuleContext<MiniCParser::BasicTypeContext>(0);
}

tree::TerminalNode* MiniCParser::FormalParamContext::T_ID() {
  return getToken(MiniCParser::T_ID, 0);
}

std::vector<MiniCParser::FormalArrayDimContext *> MiniCParser::FormalParamContext::formalArrayDim() {
  return getRuleContexts<MiniCParser::FormalArrayDimContext>();
}

MiniCParser::FormalArrayDimContext* MiniCParser::FormalParamContext::formalArrayDim(size_t i) {
  return getRuleContext<MiniCParser::FormalArrayDimContext>(i);
}


size_t MiniCParser::FormalParamContext::getRuleIndex() const {
  return MiniCParser::RuleFormalParam;
}


std::any MiniCParser::FormalParamContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MiniCVisitor*>(visitor))
    return parserVisitor->visitFormalParam(this);
  else
    return visitor->visitChildren(this);
}

MiniCParser::FormalParamContext* MiniCParser::formalParam() {
  FormalParamContext *_localctx = _tracker.createInstance<FormalParamContext>(_ctx, getState());
  enterRule(_localctx, 8, MiniCParser::RuleFormalParam);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(92);
    basicType();
    setState(93);
    match(MiniCParser::T_ID);
    setState(97);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == MiniCParser::T_L_BRACKET) {
      setState(94);
      formalArrayDim();
      setState(99);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FormalArrayDimContext ------------------------------------------------------------------

MiniCParser::FormalArrayDimContext::FormalArrayDimContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MiniCParser::FormalArrayDimContext::T_L_BRACKET() {
  return getToken(MiniCParser::T_L_BRACKET, 0);
}

tree::TerminalNode* MiniCParser::FormalArrayDimContext::T_R_BRACKET() {
  return getToken(MiniCParser::T_R_BRACKET, 0);
}

tree::TerminalNode* MiniCParser::FormalArrayDimContext::T_DIGIT() {
  return getToken(MiniCParser::T_DIGIT, 0);
}

tree::TerminalNode* MiniCParser::FormalArrayDimContext::T_ID() {
  return getToken(MiniCParser::T_ID, 0);
}


size_t MiniCParser::FormalArrayDimContext::getRuleIndex() const {
  return MiniCParser::RuleFormalArrayDim;
}


std::any MiniCParser::FormalArrayDimContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MiniCVisitor*>(visitor))
    return parserVisitor->visitFormalArrayDim(this);
  else
    return visitor->visitChildren(this);
}

MiniCParser::FormalArrayDimContext* MiniCParser::formalArrayDim() {
  FormalArrayDimContext *_localctx = _tracker.createInstance<FormalArrayDimContext>(_ctx, getState());
  enterRule(_localctx, 10, MiniCParser::RuleFormalArrayDim);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(100);
    match(MiniCParser::T_L_BRACKET);
    setState(102);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == MiniCParser::T_ID

    || _la == MiniCParser::T_DIGIT) {
      setState(101);
      _la = _input->LA(1);
      if (!(_la == MiniCParser::T_ID

      || _la == MiniCParser::T_DIGIT)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
    }
    setState(104);
    match(MiniCParser::T_R_BRACKET);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockContext ------------------------------------------------------------------

MiniCParser::BlockContext::BlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MiniCParser::BlockContext::T_L_BRACE() {
  return getToken(MiniCParser::T_L_BRACE, 0);
}

tree::TerminalNode* MiniCParser::BlockContext::T_R_BRACE() {
  return getToken(MiniCParser::T_R_BRACE, 0);
}

MiniCParser::BlockItemListContext* MiniCParser::BlockContext::blockItemList() {
  return getRuleContext<MiniCParser::BlockItemListContext>(0);
}


size_t MiniCParser::BlockContext::getRuleIndex() const {
  return MiniCParser::RuleBlock;
}


std::any MiniCParser::BlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MiniCVisitor*>(visitor))
    return parserVisitor->visitBlock(this);
  else
    return visitor->visitChildren(this);
}

MiniCParser::BlockContext* MiniCParser::block() {
  BlockContext *_localctx = _tracker.createInstance<BlockContext>(_ctx, getState());
  enterRule(_localctx, 12, MiniCParser::RuleBlock);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(106);
    match(MiniCParser::T_L_BRACE);
    setState(108);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 1064984125544) != 0)) {
      setState(107);
      blockItemList();
    }
    setState(110);
    match(MiniCParser::T_R_BRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockItemListContext ------------------------------------------------------------------

MiniCParser::BlockItemListContext::BlockItemListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<MiniCParser::BlockItemContext *> MiniCParser::BlockItemListContext::blockItem() {
  return getRuleContexts<MiniCParser::BlockItemContext>();
}

MiniCParser::BlockItemContext* MiniCParser::BlockItemListContext::blockItem(size_t i) {
  return getRuleContext<MiniCParser::BlockItemContext>(i);
}


size_t MiniCParser::BlockItemListContext::getRuleIndex() const {
  return MiniCParser::RuleBlockItemList;
}


std::any MiniCParser::BlockItemListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MiniCVisitor*>(visitor))
    return parserVisitor->visitBlockItemList(this);
  else
    return visitor->visitChildren(this);
}

MiniCParser::BlockItemListContext* MiniCParser::blockItemList() {
  BlockItemListContext *_localctx = _tracker.createInstance<BlockItemListContext>(_ctx, getState());
  enterRule(_localctx, 14, MiniCParser::RuleBlockItemList);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(113); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(112);
      blockItem();
      setState(115); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 1064984125544) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockItemContext ------------------------------------------------------------------

MiniCParser::BlockItemContext::BlockItemContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MiniCParser::StatementContext* MiniCParser::BlockItemContext::statement() {
  return getRuleContext<MiniCParser::StatementContext>(0);
}

MiniCParser::VarDeclContext* MiniCParser::BlockItemContext::varDecl() {
  return getRuleContext<MiniCParser::VarDeclContext>(0);
}


size_t MiniCParser::BlockItemContext::getRuleIndex() const {
  return MiniCParser::RuleBlockItem;
}


std::any MiniCParser::BlockItemContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MiniCVisitor*>(visitor))
    return parserVisitor->visitBlockItem(this);
  else
    return visitor->visitChildren(this);
}

MiniCParser::BlockItemContext* MiniCParser::blockItem() {
  BlockItemContext *_localctx = _tracker.createInstance<BlockItemContext>(_ctx, getState());
  enterRule(_localctx, 16, MiniCParser::RuleBlockItem);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(119);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MiniCParser::T_L_PAREN:
      case MiniCParser::T_SEMICOLON:
      case MiniCParser::T_L_BRACE:
      case MiniCParser::T_SUB:
      case MiniCParser::T_NOT:
      case MiniCParser::T_IF:
      case MiniCParser::T_WHILE:
      case MiniCParser::T_BREAK:
      case MiniCParser::T_CONTINUE:
      case MiniCParser::T_TRUE:
      case MiniCParser::T_FALSE:
      case MiniCParser::T_RETURN:
      case MiniCParser::T_ID:
      case MiniCParser::T_OCTAL:
      case MiniCParser::T_HEX:
      case MiniCParser::T_DIGIT: {
        enterOuterAlt(_localctx, 1);
        setState(117);
        statement();
        break;
      }

      case MiniCParser::T_INT: {
        enterOuterAlt(_localctx, 2);
        setState(118);
        varDecl();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VarDeclContext ------------------------------------------------------------------

MiniCParser::VarDeclContext::VarDeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MiniCParser::BasicTypeContext* MiniCParser::VarDeclContext::basicType() {
  return getRuleContext<MiniCParser::BasicTypeContext>(0);
}

std::vector<MiniCParser::VarDefContext *> MiniCParser::VarDeclContext::varDef() {
  return getRuleContexts<MiniCParser::VarDefContext>();
}

MiniCParser::VarDefContext* MiniCParser::VarDeclContext::varDef(size_t i) {
  return getRuleContext<MiniCParser::VarDefContext>(i);
}

tree::TerminalNode* MiniCParser::VarDeclContext::T_SEMICOLON() {
  return getToken(MiniCParser::T_SEMICOLON, 0);
}

std::vector<tree::TerminalNode *> MiniCParser::VarDeclContext::T_COMMA() {
  return getTokens(MiniCParser::T_COMMA);
}

tree::TerminalNode* MiniCParser::VarDeclContext::T_COMMA(size_t i) {
  return getToken(MiniCParser::T_COMMA, i);
}


size_t MiniCParser::VarDeclContext::getRuleIndex() const {
  return MiniCParser::RuleVarDecl;
}


std::any MiniCParser::VarDeclContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MiniCVisitor*>(visitor))
    return parserVisitor->visitVarDecl(this);
  else
    return visitor->visitChildren(this);
}

MiniCParser::VarDeclContext* MiniCParser::varDecl() {
  VarDeclContext *_localctx = _tracker.createInstance<VarDeclContext>(_ctx, getState());
  enterRule(_localctx, 18, MiniCParser::RuleVarDecl);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(121);
    basicType();
    setState(122);
    varDef();
    setState(127);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == MiniCParser::T_COMMA) {
      setState(123);
      match(MiniCParser::T_COMMA);
      setState(124);
      varDef();
      setState(129);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(130);
    match(MiniCParser::T_SEMICOLON);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArrayDimContext ------------------------------------------------------------------

MiniCParser::ArrayDimContext::ArrayDimContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MiniCParser::ArrayDimContext::T_L_BRACKET() {
  return getToken(MiniCParser::T_L_BRACKET, 0);
}

MiniCParser::ExprContext* MiniCParser::ArrayDimContext::expr() {
  return getRuleContext<MiniCParser::ExprContext>(0);
}

tree::TerminalNode* MiniCParser::ArrayDimContext::T_R_BRACKET() {
  return getToken(MiniCParser::T_R_BRACKET, 0);
}


size_t MiniCParser::ArrayDimContext::getRuleIndex() const {
  return MiniCParser::RuleArrayDim;
}


std::any MiniCParser::ArrayDimContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MiniCVisitor*>(visitor))
    return parserVisitor->visitArrayDim(this);
  else
    return visitor->visitChildren(this);
}

MiniCParser::ArrayDimContext* MiniCParser::arrayDim() {
  ArrayDimContext *_localctx = _tracker.createInstance<ArrayDimContext>(_ctx, getState());
  enterRule(_localctx, 20, MiniCParser::RuleArrayDim);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(132);
    match(MiniCParser::T_L_BRACKET);
    setState(133);
    expr();
    setState(134);
    match(MiniCParser::T_R_BRACKET);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VarDefContext ------------------------------------------------------------------

MiniCParser::VarDefContext::VarDefContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MiniCParser::VarDefContext::T_ID() {
  return getToken(MiniCParser::T_ID, 0);
}

tree::TerminalNode* MiniCParser::VarDefContext::T_ASSIGN() {
  return getToken(MiniCParser::T_ASSIGN, 0);
}

MiniCParser::ExprContext* MiniCParser::VarDefContext::expr() {
  return getRuleContext<MiniCParser::ExprContext>(0);
}

std::vector<MiniCParser::ArrayDimContext *> MiniCParser::VarDefContext::arrayDim() {
  return getRuleContexts<MiniCParser::ArrayDimContext>();
}

MiniCParser::ArrayDimContext* MiniCParser::VarDefContext::arrayDim(size_t i) {
  return getRuleContext<MiniCParser::ArrayDimContext>(i);
}


size_t MiniCParser::VarDefContext::getRuleIndex() const {
  return MiniCParser::RuleVarDef;
}


std::any MiniCParser::VarDefContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MiniCVisitor*>(visitor))
    return parserVisitor->visitVarDef(this);
  else
    return visitor->visitChildren(this);
}

MiniCParser::VarDefContext* MiniCParser::varDef() {
  VarDefContext *_localctx = _tracker.createInstance<VarDefContext>(_ctx, getState());
  enterRule(_localctx, 22, MiniCParser::RuleVarDef);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(147);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(136);
      match(MiniCParser::T_ID);
      setState(139);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == MiniCParser::T_ASSIGN) {
        setState(137);
        match(MiniCParser::T_ASSIGN);
        setState(138);
        expr();
      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(141);
      match(MiniCParser::T_ID);
      setState(143); 
      _errHandler->sync(this);
      _la = _input->LA(1);
      do {
        setState(142);
        arrayDim();
        setState(145); 
        _errHandler->sync(this);
        _la = _input->LA(1);
      } while (_la == MiniCParser::T_L_BRACKET);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BasicTypeContext ------------------------------------------------------------------

MiniCParser::BasicTypeContext::BasicTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MiniCParser::BasicTypeContext::T_INT() {
  return getToken(MiniCParser::T_INT, 0);
}


size_t MiniCParser::BasicTypeContext::getRuleIndex() const {
  return MiniCParser::RuleBasicType;
}


std::any MiniCParser::BasicTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MiniCVisitor*>(visitor))
    return parserVisitor->visitBasicType(this);
  else
    return visitor->visitChildren(this);
}

MiniCParser::BasicTypeContext* MiniCParser::basicType() {
  BasicTypeContext *_localctx = _tracker.createInstance<BasicTypeContext>(_ctx, getState());
  enterRule(_localctx, 24, MiniCParser::RuleBasicType);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(149);
    match(MiniCParser::T_INT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

MiniCParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t MiniCParser::StatementContext::getRuleIndex() const {
  return MiniCParser::RuleStatement;
}

void MiniCParser::StatementContext::copyFrom(StatementContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- WhileStatementContext ------------------------------------------------------------------

tree::TerminalNode* MiniCParser::WhileStatementContext::T_WHILE() {
  return getToken(MiniCParser::T_WHILE, 0);
}

tree::TerminalNode* MiniCParser::WhileStatementContext::T_L_PAREN() {
  return getToken(MiniCParser::T_L_PAREN, 0);
}

MiniCParser::ExprContext* MiniCParser::WhileStatementContext::expr() {
  return getRuleContext<MiniCParser::ExprContext>(0);
}

tree::TerminalNode* MiniCParser::WhileStatementContext::T_R_PAREN() {
  return getToken(MiniCParser::T_R_PAREN, 0);
}

MiniCParser::StatementContext* MiniCParser::WhileStatementContext::statement() {
  return getRuleContext<MiniCParser::StatementContext>(0);
}

MiniCParser::WhileStatementContext::WhileStatementContext(StatementContext *ctx) { copyFrom(ctx); }


std::any MiniCParser::WhileStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MiniCVisitor*>(visitor))
    return parserVisitor->visitWhileStatement(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BlockStatementContext ------------------------------------------------------------------

MiniCParser::BlockContext* MiniCParser::BlockStatementContext::block() {
  return getRuleContext<MiniCParser::BlockContext>(0);
}

MiniCParser::BlockStatementContext::BlockStatementContext(StatementContext *ctx) { copyFrom(ctx); }


std::any MiniCParser::BlockStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MiniCVisitor*>(visitor))
    return parserVisitor->visitBlockStatement(this);
  else
    return visitor->visitChildren(this);
}
//----------------- IfElseStatementContext ------------------------------------------------------------------

tree::TerminalNode* MiniCParser::IfElseStatementContext::T_IF() {
  return getToken(MiniCParser::T_IF, 0);
}

tree::TerminalNode* MiniCParser::IfElseStatementContext::T_L_PAREN() {
  return getToken(MiniCParser::T_L_PAREN, 0);
}

MiniCParser::ExprContext* MiniCParser::IfElseStatementContext::expr() {
  return getRuleContext<MiniCParser::ExprContext>(0);
}

tree::TerminalNode* MiniCParser::IfElseStatementContext::T_R_PAREN() {
  return getToken(MiniCParser::T_R_PAREN, 0);
}

std::vector<MiniCParser::StatementContext *> MiniCParser::IfElseStatementContext::statement() {
  return getRuleContexts<MiniCParser::StatementContext>();
}

MiniCParser::StatementContext* MiniCParser::IfElseStatementContext::statement(size_t i) {
  return getRuleContext<MiniCParser::StatementContext>(i);
}

tree::TerminalNode* MiniCParser::IfElseStatementContext::T_ELSE() {
  return getToken(MiniCParser::T_ELSE, 0);
}

MiniCParser::IfElseStatementContext::IfElseStatementContext(StatementContext *ctx) { copyFrom(ctx); }


std::any MiniCParser::IfElseStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MiniCVisitor*>(visitor))
    return parserVisitor->visitIfElseStatement(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AssignStatementContext ------------------------------------------------------------------

MiniCParser::LValContext* MiniCParser::AssignStatementContext::lVal() {
  return getRuleContext<MiniCParser::LValContext>(0);
}

tree::TerminalNode* MiniCParser::AssignStatementContext::T_ASSIGN() {
  return getToken(MiniCParser::T_ASSIGN, 0);
}

MiniCParser::ExprContext* MiniCParser::AssignStatementContext::expr() {
  return getRuleContext<MiniCParser::ExprContext>(0);
}

tree::TerminalNode* MiniCParser::AssignStatementContext::T_SEMICOLON() {
  return getToken(MiniCParser::T_SEMICOLON, 0);
}

MiniCParser::AssignStatementContext::AssignStatementContext(StatementContext *ctx) { copyFrom(ctx); }


std::any MiniCParser::AssignStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MiniCVisitor*>(visitor))
    return parserVisitor->visitAssignStatement(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BreakStatementContext ------------------------------------------------------------------

tree::TerminalNode* MiniCParser::BreakStatementContext::T_BREAK() {
  return getToken(MiniCParser::T_BREAK, 0);
}

tree::TerminalNode* MiniCParser::BreakStatementContext::T_SEMICOLON() {
  return getToken(MiniCParser::T_SEMICOLON, 0);
}

MiniCParser::BreakStatementContext::BreakStatementContext(StatementContext *ctx) { copyFrom(ctx); }


std::any MiniCParser::BreakStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MiniCVisitor*>(visitor))
    return parserVisitor->visitBreakStatement(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ExpressionStatementContext ------------------------------------------------------------------

tree::TerminalNode* MiniCParser::ExpressionStatementContext::T_SEMICOLON() {
  return getToken(MiniCParser::T_SEMICOLON, 0);
}

MiniCParser::ExprContext* MiniCParser::ExpressionStatementContext::expr() {
  return getRuleContext<MiniCParser::ExprContext>(0);
}

MiniCParser::ExpressionStatementContext::ExpressionStatementContext(StatementContext *ctx) { copyFrom(ctx); }


std::any MiniCParser::ExpressionStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MiniCVisitor*>(visitor))
    return parserVisitor->visitExpressionStatement(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ContinueStatementContext ------------------------------------------------------------------

tree::TerminalNode* MiniCParser::ContinueStatementContext::T_CONTINUE() {
  return getToken(MiniCParser::T_CONTINUE, 0);
}

tree::TerminalNode* MiniCParser::ContinueStatementContext::T_SEMICOLON() {
  return getToken(MiniCParser::T_SEMICOLON, 0);
}

MiniCParser::ContinueStatementContext::ContinueStatementContext(StatementContext *ctx) { copyFrom(ctx); }


std::any MiniCParser::ContinueStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MiniCVisitor*>(visitor))
    return parserVisitor->visitContinueStatement(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ReturnStatementContext ------------------------------------------------------------------

tree::TerminalNode* MiniCParser::ReturnStatementContext::T_RETURN() {
  return getToken(MiniCParser::T_RETURN, 0);
}

tree::TerminalNode* MiniCParser::ReturnStatementContext::T_SEMICOLON() {
  return getToken(MiniCParser::T_SEMICOLON, 0);
}

MiniCParser::ExprContext* MiniCParser::ReturnStatementContext::expr() {
  return getRuleContext<MiniCParser::ExprContext>(0);
}

MiniCParser::ReturnStatementContext::ReturnStatementContext(StatementContext *ctx) { copyFrom(ctx); }


std::any MiniCParser::ReturnStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MiniCVisitor*>(visitor))
    return parserVisitor->visitReturnStatement(this);
  else
    return visitor->visitChildren(this);
}
//----------------- IfStatementContext ------------------------------------------------------------------

tree::TerminalNode* MiniCParser::IfStatementContext::T_IF() {
  return getToken(MiniCParser::T_IF, 0);
}

tree::TerminalNode* MiniCParser::IfStatementContext::T_L_PAREN() {
  return getToken(MiniCParser::T_L_PAREN, 0);
}

MiniCParser::ExprContext* MiniCParser::IfStatementContext::expr() {
  return getRuleContext<MiniCParser::ExprContext>(0);
}

tree::TerminalNode* MiniCParser::IfStatementContext::T_R_PAREN() {
  return getToken(MiniCParser::T_R_PAREN, 0);
}

MiniCParser::StatementContext* MiniCParser::IfStatementContext::statement() {
  return getRuleContext<MiniCParser::StatementContext>(0);
}

MiniCParser::IfStatementContext::IfStatementContext(StatementContext *ctx) { copyFrom(ctx); }


std::any MiniCParser::IfStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MiniCVisitor*>(visitor))
    return parserVisitor->visitIfStatement(this);
  else
    return visitor->visitChildren(this);
}
MiniCParser::StatementContext* MiniCParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 26, MiniCParser::RuleStatement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(190);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<MiniCParser::ReturnStatementContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(151);
      match(MiniCParser::T_RETURN);
      setState(153);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 1037268164616) != 0)) {
        setState(152);
        expr();
      }
      setState(155);
      match(MiniCParser::T_SEMICOLON);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<MiniCParser::AssignStatementContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(156);
      lVal();
      setState(157);
      match(MiniCParser::T_ASSIGN);
      setState(158);
      expr();
      setState(159);
      match(MiniCParser::T_SEMICOLON);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<MiniCParser::BlockStatementContext>(_localctx);
      enterOuterAlt(_localctx, 3);
      setState(161);
      block();
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<MiniCParser::ExpressionStatementContext>(_localctx);
      enterOuterAlt(_localctx, 4);
      setState(163);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 1037268164616) != 0)) {
        setState(162);
        expr();
      }
      setState(165);
      match(MiniCParser::T_SEMICOLON);
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<MiniCParser::IfStatementContext>(_localctx);
      enterOuterAlt(_localctx, 5);
      setState(166);
      match(MiniCParser::T_IF);
      setState(167);
      match(MiniCParser::T_L_PAREN);
      setState(168);
      expr();
      setState(169);
      match(MiniCParser::T_R_PAREN);
      setState(170);
      statement();
      break;
    }

    case 6: {
      _localctx = _tracker.createInstance<MiniCParser::IfElseStatementContext>(_localctx);
      enterOuterAlt(_localctx, 6);
      setState(172);
      match(MiniCParser::T_IF);
      setState(173);
      match(MiniCParser::T_L_PAREN);
      setState(174);
      expr();
      setState(175);
      match(MiniCParser::T_R_PAREN);
      setState(176);
      statement();
      setState(177);
      match(MiniCParser::T_ELSE);
      setState(178);
      statement();
      break;
    }

    case 7: {
      _localctx = _tracker.createInstance<MiniCParser::WhileStatementContext>(_localctx);
      enterOuterAlt(_localctx, 7);
      setState(180);
      match(MiniCParser::T_WHILE);
      setState(181);
      match(MiniCParser::T_L_PAREN);
      setState(182);
      expr();
      setState(183);
      match(MiniCParser::T_R_PAREN);
      setState(184);
      statement();
      break;
    }

    case 8: {
      _localctx = _tracker.createInstance<MiniCParser::BreakStatementContext>(_localctx);
      enterOuterAlt(_localctx, 8);
      setState(186);
      match(MiniCParser::T_BREAK);
      setState(187);
      match(MiniCParser::T_SEMICOLON);
      break;
    }

    case 9: {
      _localctx = _tracker.createInstance<MiniCParser::ContinueStatementContext>(_localctx);
      enterOuterAlt(_localctx, 9);
      setState(188);
      match(MiniCParser::T_CONTINUE);
      setState(189);
      match(MiniCParser::T_SEMICOLON);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExprContext ------------------------------------------------------------------

MiniCParser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MiniCParser::LogicalOrExpContext* MiniCParser::ExprContext::logicalOrExp() {
  return getRuleContext<MiniCParser::LogicalOrExpContext>(0);
}


size_t MiniCParser::ExprContext::getRuleIndex() const {
  return MiniCParser::RuleExpr;
}


std::any MiniCParser::ExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MiniCVisitor*>(visitor))
    return parserVisitor->visitExpr(this);
  else
    return visitor->visitChildren(this);
}

MiniCParser::ExprContext* MiniCParser::expr() {
  ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, getState());
  enterRule(_localctx, 28, MiniCParser::RuleExpr);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(192);
    logicalOrExp();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LogicalOrExpContext ------------------------------------------------------------------

MiniCParser::LogicalOrExpContext::LogicalOrExpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<MiniCParser::LogicalAndExpContext *> MiniCParser::LogicalOrExpContext::logicalAndExp() {
  return getRuleContexts<MiniCParser::LogicalAndExpContext>();
}

MiniCParser::LogicalAndExpContext* MiniCParser::LogicalOrExpContext::logicalAndExp(size_t i) {
  return getRuleContext<MiniCParser::LogicalAndExpContext>(i);
}

std::vector<MiniCParser::LogicalOrOpContext *> MiniCParser::LogicalOrExpContext::logicalOrOp() {
  return getRuleContexts<MiniCParser::LogicalOrOpContext>();
}

MiniCParser::LogicalOrOpContext* MiniCParser::LogicalOrExpContext::logicalOrOp(size_t i) {
  return getRuleContext<MiniCParser::LogicalOrOpContext>(i);
}


size_t MiniCParser::LogicalOrExpContext::getRuleIndex() const {
  return MiniCParser::RuleLogicalOrExp;
}


std::any MiniCParser::LogicalOrExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MiniCVisitor*>(visitor))
    return parserVisitor->visitLogicalOrExp(this);
  else
    return visitor->visitChildren(this);
}

MiniCParser::LogicalOrExpContext* MiniCParser::logicalOrExp() {
  LogicalOrExpContext *_localctx = _tracker.createInstance<LogicalOrExpContext>(_ctx, getState());
  enterRule(_localctx, 30, MiniCParser::RuleLogicalOrExp);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(194);
    logicalAndExp();
    setState(200);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == MiniCParser::T_OR) {
      setState(195);
      logicalOrOp();
      setState(196);
      logicalAndExp();
      setState(202);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LogicalAndExpContext ------------------------------------------------------------------

MiniCParser::LogicalAndExpContext::LogicalAndExpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<MiniCParser::EqualityExpContext *> MiniCParser::LogicalAndExpContext::equalityExp() {
  return getRuleContexts<MiniCParser::EqualityExpContext>();
}

MiniCParser::EqualityExpContext* MiniCParser::LogicalAndExpContext::equalityExp(size_t i) {
  return getRuleContext<MiniCParser::EqualityExpContext>(i);
}

std::vector<MiniCParser::LogicalAndOpContext *> MiniCParser::LogicalAndExpContext::logicalAndOp() {
  return getRuleContexts<MiniCParser::LogicalAndOpContext>();
}

MiniCParser::LogicalAndOpContext* MiniCParser::LogicalAndExpContext::logicalAndOp(size_t i) {
  return getRuleContext<MiniCParser::LogicalAndOpContext>(i);
}


size_t MiniCParser::LogicalAndExpContext::getRuleIndex() const {
  return MiniCParser::RuleLogicalAndExp;
}


std::any MiniCParser::LogicalAndExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MiniCVisitor*>(visitor))
    return parserVisitor->visitLogicalAndExp(this);
  else
    return visitor->visitChildren(this);
}

MiniCParser::LogicalAndExpContext* MiniCParser::logicalAndExp() {
  LogicalAndExpContext *_localctx = _tracker.createInstance<LogicalAndExpContext>(_ctx, getState());
  enterRule(_localctx, 32, MiniCParser::RuleLogicalAndExp);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(203);
    equalityExp();
    setState(209);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == MiniCParser::T_AND) {
      setState(204);
      logicalAndOp();
      setState(205);
      equalityExp();
      setState(211);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EqualityExpContext ------------------------------------------------------------------

MiniCParser::EqualityExpContext::EqualityExpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<MiniCParser::RelExpContext *> MiniCParser::EqualityExpContext::relExp() {
  return getRuleContexts<MiniCParser::RelExpContext>();
}

MiniCParser::RelExpContext* MiniCParser::EqualityExpContext::relExp(size_t i) {
  return getRuleContext<MiniCParser::RelExpContext>(i);
}

std::vector<MiniCParser::EqualityOpContext *> MiniCParser::EqualityExpContext::equalityOp() {
  return getRuleContexts<MiniCParser::EqualityOpContext>();
}

MiniCParser::EqualityOpContext* MiniCParser::EqualityExpContext::equalityOp(size_t i) {
  return getRuleContext<MiniCParser::EqualityOpContext>(i);
}


size_t MiniCParser::EqualityExpContext::getRuleIndex() const {
  return MiniCParser::RuleEqualityExp;
}


std::any MiniCParser::EqualityExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MiniCVisitor*>(visitor))
    return parserVisitor->visitEqualityExp(this);
  else
    return visitor->visitChildren(this);
}

MiniCParser::EqualityExpContext* MiniCParser::equalityExp() {
  EqualityExpContext *_localctx = _tracker.createInstance<EqualityExpContext>(_ctx, getState());
  enterRule(_localctx, 34, MiniCParser::RuleEqualityExp);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(212);
    relExp();
    setState(218);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == MiniCParser::T_EQ

    || _la == MiniCParser::T_NE) {
      setState(213);
      equalityOp();
      setState(214);
      relExp();
      setState(220);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RelExpContext ------------------------------------------------------------------

MiniCParser::RelExpContext::RelExpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<MiniCParser::AddExpContext *> MiniCParser::RelExpContext::addExp() {
  return getRuleContexts<MiniCParser::AddExpContext>();
}

MiniCParser::AddExpContext* MiniCParser::RelExpContext::addExp(size_t i) {
  return getRuleContext<MiniCParser::AddExpContext>(i);
}

std::vector<MiniCParser::RelOpContext *> MiniCParser::RelExpContext::relOp() {
  return getRuleContexts<MiniCParser::RelOpContext>();
}

MiniCParser::RelOpContext* MiniCParser::RelExpContext::relOp(size_t i) {
  return getRuleContext<MiniCParser::RelOpContext>(i);
}


size_t MiniCParser::RelExpContext::getRuleIndex() const {
  return MiniCParser::RuleRelExp;
}


std::any MiniCParser::RelExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MiniCVisitor*>(visitor))
    return parserVisitor->visitRelExp(this);
  else
    return visitor->visitChildren(this);
}

MiniCParser::RelExpContext* MiniCParser::relExp() {
  RelExpContext *_localctx = _tracker.createInstance<RelExpContext>(_ctx, getState());
  enterRule(_localctx, 36, MiniCParser::RuleRelExp);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(221);
    addExp();
    setState(227);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 1966080) != 0)) {
      setState(222);
      relOp();
      setState(223);
      addExp();
      setState(229);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AddExpContext ------------------------------------------------------------------

MiniCParser::AddExpContext::AddExpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<MiniCParser::MulExpContext *> MiniCParser::AddExpContext::mulExp() {
  return getRuleContexts<MiniCParser::MulExpContext>();
}

MiniCParser::MulExpContext* MiniCParser::AddExpContext::mulExp(size_t i) {
  return getRuleContext<MiniCParser::MulExpContext>(i);
}

std::vector<MiniCParser::AddOpContext *> MiniCParser::AddExpContext::addOp() {
  return getRuleContexts<MiniCParser::AddOpContext>();
}

MiniCParser::AddOpContext* MiniCParser::AddExpContext::addOp(size_t i) {
  return getRuleContext<MiniCParser::AddOpContext>(i);
}


size_t MiniCParser::AddExpContext::getRuleIndex() const {
  return MiniCParser::RuleAddExp;
}


std::any MiniCParser::AddExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MiniCVisitor*>(visitor))
    return parserVisitor->visitAddExp(this);
  else
    return visitor->visitChildren(this);
}

MiniCParser::AddExpContext* MiniCParser::addExp() {
  AddExpContext *_localctx = _tracker.createInstance<AddExpContext>(_ctx, getState());
  enterRule(_localctx, 38, MiniCParser::RuleAddExp);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(230);
    mulExp();
    setState(236);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == MiniCParser::T_ADD

    || _la == MiniCParser::T_SUB) {
      setState(231);
      addOp();
      setState(232);
      mulExp();
      setState(238);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MulExpContext ------------------------------------------------------------------

MiniCParser::MulExpContext::MulExpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<MiniCParser::UnaryExpContext *> MiniCParser::MulExpContext::unaryExp() {
  return getRuleContexts<MiniCParser::UnaryExpContext>();
}

MiniCParser::UnaryExpContext* MiniCParser::MulExpContext::unaryExp(size_t i) {
  return getRuleContext<MiniCParser::UnaryExpContext>(i);
}

std::vector<MiniCParser::MulOpContext *> MiniCParser::MulExpContext::mulOp() {
  return getRuleContexts<MiniCParser::MulOpContext>();
}

MiniCParser::MulOpContext* MiniCParser::MulExpContext::mulOp(size_t i) {
  return getRuleContext<MiniCParser::MulOpContext>(i);
}


size_t MiniCParser::MulExpContext::getRuleIndex() const {
  return MiniCParser::RuleMulExp;
}


std::any MiniCParser::MulExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MiniCVisitor*>(visitor))
    return parserVisitor->visitMulExp(this);
  else
    return visitor->visitChildren(this);
}

MiniCParser::MulExpContext* MiniCParser::mulExp() {
  MulExpContext *_localctx = _tracker.createInstance<MulExpContext>(_ctx, getState());
  enterRule(_localctx, 40, MiniCParser::RuleMulExp);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(239);
    unaryExp();
    setState(245);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 114688) != 0)) {
      setState(240);
      mulOp();
      setState(241);
      unaryExp();
      setState(247);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LogicalOrOpContext ------------------------------------------------------------------

MiniCParser::LogicalOrOpContext::LogicalOrOpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MiniCParser::LogicalOrOpContext::T_OR() {
  return getToken(MiniCParser::T_OR, 0);
}


size_t MiniCParser::LogicalOrOpContext::getRuleIndex() const {
  return MiniCParser::RuleLogicalOrOp;
}


std::any MiniCParser::LogicalOrOpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MiniCVisitor*>(visitor))
    return parserVisitor->visitLogicalOrOp(this);
  else
    return visitor->visitChildren(this);
}

MiniCParser::LogicalOrOpContext* MiniCParser::logicalOrOp() {
  LogicalOrOpContext *_localctx = _tracker.createInstance<LogicalOrOpContext>(_ctx, getState());
  enterRule(_localctx, 42, MiniCParser::RuleLogicalOrOp);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(248);
    match(MiniCParser::T_OR);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LogicalAndOpContext ------------------------------------------------------------------

MiniCParser::LogicalAndOpContext::LogicalAndOpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MiniCParser::LogicalAndOpContext::T_AND() {
  return getToken(MiniCParser::T_AND, 0);
}


size_t MiniCParser::LogicalAndOpContext::getRuleIndex() const {
  return MiniCParser::RuleLogicalAndOp;
}


std::any MiniCParser::LogicalAndOpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MiniCVisitor*>(visitor))
    return parserVisitor->visitLogicalAndOp(this);
  else
    return visitor->visitChildren(this);
}

MiniCParser::LogicalAndOpContext* MiniCParser::logicalAndOp() {
  LogicalAndOpContext *_localctx = _tracker.createInstance<LogicalAndOpContext>(_ctx, getState());
  enterRule(_localctx, 44, MiniCParser::RuleLogicalAndOp);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(250);
    match(MiniCParser::T_AND);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EqualityOpContext ------------------------------------------------------------------

MiniCParser::EqualityOpContext::EqualityOpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MiniCParser::EqualityOpContext::T_EQ() {
  return getToken(MiniCParser::T_EQ, 0);
}

tree::TerminalNode* MiniCParser::EqualityOpContext::T_NE() {
  return getToken(MiniCParser::T_NE, 0);
}


size_t MiniCParser::EqualityOpContext::getRuleIndex() const {
  return MiniCParser::RuleEqualityOp;
}


std::any MiniCParser::EqualityOpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MiniCVisitor*>(visitor))
    return parserVisitor->visitEqualityOp(this);
  else
    return visitor->visitChildren(this);
}

MiniCParser::EqualityOpContext* MiniCParser::equalityOp() {
  EqualityOpContext *_localctx = _tracker.createInstance<EqualityOpContext>(_ctx, getState());
  enterRule(_localctx, 46, MiniCParser::RuleEqualityOp);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(252);
    _la = _input->LA(1);
    if (!(_la == MiniCParser::T_EQ

    || _la == MiniCParser::T_NE)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RelOpContext ------------------------------------------------------------------

MiniCParser::RelOpContext::RelOpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MiniCParser::RelOpContext::T_LT() {
  return getToken(MiniCParser::T_LT, 0);
}

tree::TerminalNode* MiniCParser::RelOpContext::T_GT() {
  return getToken(MiniCParser::T_GT, 0);
}

tree::TerminalNode* MiniCParser::RelOpContext::T_LE() {
  return getToken(MiniCParser::T_LE, 0);
}

tree::TerminalNode* MiniCParser::RelOpContext::T_GE() {
  return getToken(MiniCParser::T_GE, 0);
}


size_t MiniCParser::RelOpContext::getRuleIndex() const {
  return MiniCParser::RuleRelOp;
}


std::any MiniCParser::RelOpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MiniCVisitor*>(visitor))
    return parserVisitor->visitRelOp(this);
  else
    return visitor->visitChildren(this);
}

MiniCParser::RelOpContext* MiniCParser::relOp() {
  RelOpContext *_localctx = _tracker.createInstance<RelOpContext>(_ctx, getState());
  enterRule(_localctx, 48, MiniCParser::RuleRelOp);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(254);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 1966080) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AddOpContext ------------------------------------------------------------------

MiniCParser::AddOpContext::AddOpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MiniCParser::AddOpContext::T_ADD() {
  return getToken(MiniCParser::T_ADD, 0);
}

tree::TerminalNode* MiniCParser::AddOpContext::T_SUB() {
  return getToken(MiniCParser::T_SUB, 0);
}


size_t MiniCParser::AddOpContext::getRuleIndex() const {
  return MiniCParser::RuleAddOp;
}


std::any MiniCParser::AddOpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MiniCVisitor*>(visitor))
    return parserVisitor->visitAddOp(this);
  else
    return visitor->visitChildren(this);
}

MiniCParser::AddOpContext* MiniCParser::addOp() {
  AddOpContext *_localctx = _tracker.createInstance<AddOpContext>(_ctx, getState());
  enterRule(_localctx, 50, MiniCParser::RuleAddOp);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(256);
    _la = _input->LA(1);
    if (!(_la == MiniCParser::T_ADD

    || _la == MiniCParser::T_SUB)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MulOpContext ------------------------------------------------------------------

MiniCParser::MulOpContext::MulOpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MiniCParser::MulOpContext::T_MUL() {
  return getToken(MiniCParser::T_MUL, 0);
}

tree::TerminalNode* MiniCParser::MulOpContext::T_DIV() {
  return getToken(MiniCParser::T_DIV, 0);
}

tree::TerminalNode* MiniCParser::MulOpContext::T_MOD() {
  return getToken(MiniCParser::T_MOD, 0);
}


size_t MiniCParser::MulOpContext::getRuleIndex() const {
  return MiniCParser::RuleMulOp;
}


std::any MiniCParser::MulOpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MiniCVisitor*>(visitor))
    return parserVisitor->visitMulOp(this);
  else
    return visitor->visitChildren(this);
}

MiniCParser::MulOpContext* MiniCParser::mulOp() {
  MulOpContext *_localctx = _tracker.createInstance<MulOpContext>(_ctx, getState());
  enterRule(_localctx, 52, MiniCParser::RuleMulOp);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(258);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 114688) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnaryExpContext ------------------------------------------------------------------

MiniCParser::UnaryExpContext::UnaryExpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MiniCParser::UnaryExpContext::T_NOT() {
  return getToken(MiniCParser::T_NOT, 0);
}

MiniCParser::UnaryExpContext* MiniCParser::UnaryExpContext::unaryExp() {
  return getRuleContext<MiniCParser::UnaryExpContext>(0);
}

tree::TerminalNode* MiniCParser::UnaryExpContext::T_SUB() {
  return getToken(MiniCParser::T_SUB, 0);
}

MiniCParser::PrimaryExpContext* MiniCParser::UnaryExpContext::primaryExp() {
  return getRuleContext<MiniCParser::PrimaryExpContext>(0);
}

tree::TerminalNode* MiniCParser::UnaryExpContext::T_ID() {
  return getToken(MiniCParser::T_ID, 0);
}

tree::TerminalNode* MiniCParser::UnaryExpContext::T_L_PAREN() {
  return getToken(MiniCParser::T_L_PAREN, 0);
}

tree::TerminalNode* MiniCParser::UnaryExpContext::T_R_PAREN() {
  return getToken(MiniCParser::T_R_PAREN, 0);
}

MiniCParser::RealParamListContext* MiniCParser::UnaryExpContext::realParamList() {
  return getRuleContext<MiniCParser::RealParamListContext>(0);
}


size_t MiniCParser::UnaryExpContext::getRuleIndex() const {
  return MiniCParser::RuleUnaryExp;
}


std::any MiniCParser::UnaryExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MiniCVisitor*>(visitor))
    return parserVisitor->visitUnaryExp(this);
  else
    return visitor->visitChildren(this);
}

MiniCParser::UnaryExpContext* MiniCParser::unaryExp() {
  UnaryExpContext *_localctx = _tracker.createInstance<UnaryExpContext>(_ctx, getState());
  enterRule(_localctx, 54, MiniCParser::RuleUnaryExp);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(271);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 24, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(260);
      match(MiniCParser::T_NOT);
      setState(261);
      unaryExp();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(262);
      match(MiniCParser::T_SUB);
      setState(263);
      unaryExp();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(264);
      primaryExp();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(265);
      match(MiniCParser::T_ID);
      setState(266);
      match(MiniCParser::T_L_PAREN);
      setState(268);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 1037268164616) != 0)) {
        setState(267);
        realParamList();
      }
      setState(270);
      match(MiniCParser::T_R_PAREN);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrimaryExpContext ------------------------------------------------------------------

MiniCParser::PrimaryExpContext::PrimaryExpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MiniCParser::PrimaryExpContext::T_L_PAREN() {
  return getToken(MiniCParser::T_L_PAREN, 0);
}

MiniCParser::ExprContext* MiniCParser::PrimaryExpContext::expr() {
  return getRuleContext<MiniCParser::ExprContext>(0);
}

tree::TerminalNode* MiniCParser::PrimaryExpContext::T_R_PAREN() {
  return getToken(MiniCParser::T_R_PAREN, 0);
}

tree::TerminalNode* MiniCParser::PrimaryExpContext::T_DIGIT() {
  return getToken(MiniCParser::T_DIGIT, 0);
}

tree::TerminalNode* MiniCParser::PrimaryExpContext::T_OCTAL() {
  return getToken(MiniCParser::T_OCTAL, 0);
}

tree::TerminalNode* MiniCParser::PrimaryExpContext::T_HEX() {
  return getToken(MiniCParser::T_HEX, 0);
}

tree::TerminalNode* MiniCParser::PrimaryExpContext::T_TRUE() {
  return getToken(MiniCParser::T_TRUE, 0);
}

tree::TerminalNode* MiniCParser::PrimaryExpContext::T_FALSE() {
  return getToken(MiniCParser::T_FALSE, 0);
}

MiniCParser::LValContext* MiniCParser::PrimaryExpContext::lVal() {
  return getRuleContext<MiniCParser::LValContext>(0);
}


size_t MiniCParser::PrimaryExpContext::getRuleIndex() const {
  return MiniCParser::RulePrimaryExp;
}


std::any MiniCParser::PrimaryExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MiniCVisitor*>(visitor))
    return parserVisitor->visitPrimaryExp(this);
  else
    return visitor->visitChildren(this);
}

MiniCParser::PrimaryExpContext* MiniCParser::primaryExp() {
  PrimaryExpContext *_localctx = _tracker.createInstance<PrimaryExpContext>(_ctx, getState());
  enterRule(_localctx, 56, MiniCParser::RulePrimaryExp);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(283);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MiniCParser::T_L_PAREN: {
        enterOuterAlt(_localctx, 1);
        setState(273);
        match(MiniCParser::T_L_PAREN);
        setState(274);
        expr();
        setState(275);
        match(MiniCParser::T_R_PAREN);
        break;
      }

      case MiniCParser::T_DIGIT: {
        enterOuterAlt(_localctx, 2);
        setState(277);
        match(MiniCParser::T_DIGIT);
        break;
      }

      case MiniCParser::T_OCTAL: {
        enterOuterAlt(_localctx, 3);
        setState(278);
        match(MiniCParser::T_OCTAL);
        break;
      }

      case MiniCParser::T_HEX: {
        enterOuterAlt(_localctx, 4);
        setState(279);
        match(MiniCParser::T_HEX);
        break;
      }

      case MiniCParser::T_TRUE: {
        enterOuterAlt(_localctx, 5);
        setState(280);
        match(MiniCParser::T_TRUE);
        break;
      }

      case MiniCParser::T_FALSE: {
        enterOuterAlt(_localctx, 6);
        setState(281);
        match(MiniCParser::T_FALSE);
        break;
      }

      case MiniCParser::T_ID: {
        enterOuterAlt(_localctx, 7);
        setState(282);
        lVal();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RealParamListContext ------------------------------------------------------------------

MiniCParser::RealParamListContext::RealParamListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<MiniCParser::ExprContext *> MiniCParser::RealParamListContext::expr() {
  return getRuleContexts<MiniCParser::ExprContext>();
}

MiniCParser::ExprContext* MiniCParser::RealParamListContext::expr(size_t i) {
  return getRuleContext<MiniCParser::ExprContext>(i);
}

std::vector<tree::TerminalNode *> MiniCParser::RealParamListContext::T_COMMA() {
  return getTokens(MiniCParser::T_COMMA);
}

tree::TerminalNode* MiniCParser::RealParamListContext::T_COMMA(size_t i) {
  return getToken(MiniCParser::T_COMMA, i);
}


size_t MiniCParser::RealParamListContext::getRuleIndex() const {
  return MiniCParser::RuleRealParamList;
}


std::any MiniCParser::RealParamListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MiniCVisitor*>(visitor))
    return parserVisitor->visitRealParamList(this);
  else
    return visitor->visitChildren(this);
}

MiniCParser::RealParamListContext* MiniCParser::realParamList() {
  RealParamListContext *_localctx = _tracker.createInstance<RealParamListContext>(_ctx, getState());
  enterRule(_localctx, 58, MiniCParser::RuleRealParamList);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(285);
    expr();
    setState(290);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == MiniCParser::T_COMMA) {
      setState(286);
      match(MiniCParser::T_COMMA);
      setState(287);
      expr();
      setState(292);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LValContext ------------------------------------------------------------------

MiniCParser::LValContext::LValContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MiniCParser::LValContext::T_ID() {
  return getToken(MiniCParser::T_ID, 0);
}

std::vector<MiniCParser::ArrayDimContext *> MiniCParser::LValContext::arrayDim() {
  return getRuleContexts<MiniCParser::ArrayDimContext>();
}

MiniCParser::ArrayDimContext* MiniCParser::LValContext::arrayDim(size_t i) {
  return getRuleContext<MiniCParser::ArrayDimContext>(i);
}


size_t MiniCParser::LValContext::getRuleIndex() const {
  return MiniCParser::RuleLVal;
}


std::any MiniCParser::LValContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MiniCVisitor*>(visitor))
    return parserVisitor->visitLVal(this);
  else
    return visitor->visitChildren(this);
}

MiniCParser::LValContext* MiniCParser::lVal() {
  LValContext *_localctx = _tracker.createInstance<LValContext>(_ctx, getState());
  enterRule(_localctx, 60, MiniCParser::RuleLVal);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(293);
    match(MiniCParser::T_ID);
    setState(297);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == MiniCParser::T_L_BRACKET) {
      setState(294);
      arrayDim();
      setState(299);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

void MiniCParser::initialize() {
  ::antlr4::internal::call_once(minicParserOnceFlag, minicParserInitialize);
}
