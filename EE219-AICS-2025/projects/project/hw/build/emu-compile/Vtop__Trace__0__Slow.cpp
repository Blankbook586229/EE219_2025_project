// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1005,"clock", false,-1);
    tracep->declBit(c+1006,"reset", false,-1);
    tracep->pushNamePrefix("top ");
    tracep->declBit(c+1005,"clock", false,-1);
    tracep->declBit(c+1006,"reset", false,-1);
    tracep->declBit(c+1007,"inst_ena", false,-1);
    tracep->declBus(c+333,"inst", false,-1, 31,0);
    tracep->declQuad(c+334,"inst_addr", false,-1, 63,0);
    tracep->declBit(c+1058,"ren_inst", false,-1);
    tracep->declQuad(c+1059,"raddr_inst", false,-1, 63,0);
    tracep->declQuad(c+1061,"rdata_inst", false,-1, 63,0);
    tracep->declBit(c+336,"ram_r_ena", false,-1);
    tracep->declQuad(c+1,"ram_r_addr", false,-1, 63,0);
    tracep->declQuad(c+3,"ram_r_data", false,-1, 63,0);
    tracep->declBit(c+337,"ram_w_ena", false,-1);
    tracep->declQuad(c+1,"ram_w_addr", false,-1, 63,0);
    tracep->declQuad(c+5,"ram_w_data", false,-1, 63,0);
    tracep->declQuad(c+7,"ram_w_mask", false,-1, 63,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+9+i*2,"regs", true,(i+0), 63,0);
    }
    tracep->declBit(c+1063,"pc_stall", false,-1);
    tracep->declQuad(c+338,"rom_rdata", false,-1, 63,0);
    tracep->declBit(c+73,"vec_rs1_r_ena", false,-1);
    tracep->declBus(c+74,"vec_rs1_r_addr", false,-1, 4,0);
    tracep->declQuad(c+75,"vec_rs1_data", false,-1, 63,0);
    tracep->declBit(c+77,"vram_r_ena", false,-1);
    tracep->declQuad(c+78,"vram_r_addr", false,-1, 63,0);
    tracep->declArray(c+80,"vram_r_data", false,-1, 511,0);
    tracep->declBit(c+1008,"vram_w_ena", false,-1);
    tracep->declQuad(c+78,"vram_w_addr", false,-1, 63,0);
    tracep->declArray(c+1009,"vram_w_data", false,-1, 511,0);
    tracep->declArray(c+1064,"vram_w_mask", false,-1, 511,0);
    tracep->pushNamePrefix("RAM ");
    tracep->declBit(c+1005,"clk", false,-1);
    tracep->declBit(c+336,"ren", false,-1);
    tracep->declQuad(c+96,"rIdx", false,-1, 63,0);
    tracep->declQuad(c+3,"rdata", false,-1, 63,0);
    tracep->declQuad(c+96,"wIdx", false,-1, 63,0);
    tracep->declQuad(c+5,"wdata", false,-1, 63,0);
    tracep->declQuad(c+7,"wmask", false,-1, 63,0);
    tracep->declBit(c+337,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RAM_VECOTR ");
    tracep->declBit(c+1005,"clk", false,-1);
    tracep->declBit(c+77,"ren", false,-1);
    tracep->declQuad(c+98,"rIdx", false,-1, 63,0);
    tracep->declArray(c+80,"rdata", false,-1, 511,0);
    tracep->declQuad(c+98,"wIdx", false,-1, 63,0);
    tracep->declArray(c+1009,"wdata", false,-1, 511,0);
    tracep->declArray(c+1064,"wmask", false,-1, 511,0);
    tracep->declBit(c+1008,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ROM_INST ");
    tracep->declBit(c+1005,"clk", false,-1);
    tracep->declBit(c+1080,"ren", false,-1);
    tracep->declQuad(c+340,"rIdx", false,-1, 63,0);
    tracep->declQuad(c+338,"rdata", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RV64I ");
    tracep->declBit(c+1005,"qRw", false,-1);
    tracep->declBit(c+1006,"GFv", false,-1);
    tracep->declBit(c+1007,"cBvbv8J", false,-1);
    tracep->declBus(c+333,"tLAz", false,-1, 31,0);
    tracep->declQuad(c+334,"M42mseGNC", false,-1, 63,0);
    tracep->declBit(c+336,"kwLFq9ece", false,-1);
    tracep->declQuad(c+1,"jyUGZ15cpD", false,-1, 63,0);
    tracep->declQuad(c+3,"sZ8K3fVwEi", false,-1, 63,0);
    tracep->declBit(c+337,"yMK6CRBBo", false,-1);
    tracep->declQuad(c+1,"to7CMZaPKY", false,-1, 63,0);
    tracep->declQuad(c+5,"iIaC58CiHx", false,-1, 63,0);
    tracep->declQuad(c+7,"GtC0qmiUqL", false,-1, 63,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+100+i*2,"imsnW0", true,(i+0), 63,0);
    }
    tracep->declBit(c+1063,"pc_stall", false,-1);
    tracep->declBit(c+164,"M0tlFLtwNj4", false,-1);
    tracep->declQuad(c+165,"epavvrInwBl", false,-1, 63,0);
    tracep->declQuad(c+334,"siZbFhceze", false,-1, 63,0);
    tracep->declQuad(c+167,"X5fLoFTh", false,-1, 63,0);
    tracep->declBit(c+169,"plyN9CKEI", false,-1);
    tracep->declBus(c+342,"kbB098u7Fq", false,-1, 4,0);
    tracep->declQuad(c+167,"zxkiTuCK4RD4", false,-1, 63,0);
    tracep->declBit(c+169,"hUduYqCAo0XLk", false,-1);
    tracep->declBus(c+342,"P9crpNurNqLiBT", false,-1, 4,0);
    tracep->declQuad(c+170,"MrCY1P97", false,-1, 63,0);
    tracep->declBit(c+172,"stsrseQpu", false,-1);
    tracep->declBus(c+343,"Ofs9NJ36Pq", false,-1, 4,0);
    tracep->declQuad(c+173,"BvitSgq1Hyw", false,-1, 63,0);
    tracep->declQuad(c+175,"Lv5ku5dc93v", false,-1, 63,0);
    tracep->declBus(c+177,"FsjRBjnjb1", false,-1, 7,0);
    tracep->declBit(c+344,"Ai9EtdpBAt", false,-1);
    tracep->declQuad(c+1,"Zsgxv3MTUv", false,-1, 63,0);
    tracep->declBit(c+345,"D7oya5Igy", false,-1);
    tracep->declQuad(c+346,"gY53pm6Uc1a5z", false,-1, 63,0);
    tracep->declBit(c+348,"wWjUJ9g", false,-1);
    tracep->declQuad(c+349,"BFWC5DLl4Ec", false,-1, 63,0);
    tracep->declBus(c+351,"Yb5ekIkGnKG8c", false,-1, 2,0);
    tracep->declBit(c+336,"a4SqTqUk3", false,-1);
    tracep->declQuad(c+178,"VOpQv3szsL", false,-1, 63,0);
    tracep->declBit(c+337,"NpNDeHiyF", false,-1);
    tracep->declQuad(c+180,"Sw9ZCULOy5", false,-1, 63,0);
    tracep->declBit(c+352,"z0MsdO", false,-1);
    tracep->declBit(c+336,"P6wD5b", false,-1);
    tracep->declBus(c+353,"ttyiClU", false,-1, 4,0);
    tracep->declBit(c+182,"CP5BekSY", false,-1);
    tracep->declBus(c+183,"fjN1GhT7w", false,-1, 4,0);
    tracep->declQuad(c+184,"cSWijWYsS", false,-1, 63,0);
    tracep->pushNamePrefix("Kv7xLhcA ");
    tracep->declBit(c+1006,"GFv", false,-1);
    tracep->declBit(c+352,"WSDwRmyT", false,-1);
    tracep->declBus(c+353,"bqrnOOkRP", false,-1, 4,0);
    tracep->declBit(c+336,"KQRQqPG3", false,-1);
    tracep->declQuad(c+1,"o6ntSojFkw", false,-1, 63,0);
    tracep->declQuad(c+178,"j3R14S5oI4", false,-1, 63,0);
    tracep->declBit(c+182,"BECXQ3iC", false,-1);
    tracep->declBus(c+183,"OA8Py3qa6", false,-1, 4,0);
    tracep->declQuad(c+184,"O9OWRNtHh", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("eD5A2ng0 ");
    tracep->declBit(c+1005,"qRw", false,-1);
    tracep->declBit(c+1006,"GFv", false,-1);
    tracep->declBit(c+164,"FlVzqaJLmQB9d", false,-1);
    tracep->declQuad(c+165,"ckxHDsjx2w8VQ", false,-1, 63,0);
    tracep->declQuad(c+334,"Z1IaB2AXzqhY", false,-1, 63,0);
    tracep->declBit(c+1007,"qovYvzF6D", false,-1);
    tracep->declQuad(c+334,"kXyFYs2fUMl", false,-1, 63,0);
    tracep->declBit(c+1063,"pc_stall", false,-1);
    tracep->declQuad(c+354,"db", false,-1, 63,0);
    tracep->declQuad(c+334,"nlju", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("jjI7ZAzN2 ");
    tracep->declBit(c+1006,"GFv", false,-1);
    tracep->declBus(c+351,"UQX1UO534Eueufy", false,-1, 2,0);
    tracep->declBit(c+336,"aTzikFmnw2L", false,-1);
    tracep->declQuad(c+1,"pfoWBIl3BSS8", false,-1, 63,0);
    tracep->declQuad(c+178,"RQrXFv01nm2Y", false,-1, 63,0);
    tracep->declBit(c+337,"SzK7f7TPjfs", false,-1);
    tracep->declQuad(c+1,"dRXdVXnEGkNt", false,-1, 63,0);
    tracep->declQuad(c+180,"EVQRdLZoqqwb", false,-1, 63,0);
    tracep->declBit(c+336,"doSBaROEalm", false,-1);
    tracep->declQuad(c+3,"yNuo2ExZSHTt", false,-1, 63,0);
    tracep->declQuad(c+1,"XRqKZqMadYIS", false,-1, 63,0);
    tracep->declBit(c+337,"fiSv7mavUEF", false,-1);
    tracep->declQuad(c+1,"ySkI99UlzaRl", false,-1, 63,0);
    tracep->declQuad(c+5,"uPLAeJWwH2VD", false,-1, 63,0);
    tracep->declQuad(c+7,"mO5xfkjIYekM", false,-1, 63,0);
    tracep->declQuad(c+3,"shKCUQ82VLz", false,-1, 63,0);
    tracep->declBus(c+186,"sKJju8Xgr7C", false,-1, 31,0);
    tracep->declBus(c+187,"bEdFnqpLQFY", false,-1, 15,0);
    tracep->declBus(c+188,"ZxFtpStHVWm", false,-1, 7,0);
    tracep->declQuad(c+7,"KzUS4LT1bsC", false,-1, 63,0);
    tracep->declQuad(c+1081,"gHxuxUy7K", false,-1, 63,0);
    tracep->declQuad(c+189,"iKFW5SVLk", false,-1, 63,0);
    tracep->declQuad(c+191,"bNoqmsE88", false,-1, 63,0);
    tracep->declQuad(c+193,"iMPPekqeo", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("juyxmMf ");
    tracep->declBit(c+1005,"qRw", false,-1);
    tracep->declBit(c+1006,"GFv", false,-1);
    tracep->declBus(c+183,"tJPZEp4r", false,-1, 4,0);
    tracep->declQuad(c+184,"UADGd6uM", false,-1, 63,0);
    tracep->declBit(c+182,"jMvw26B", false,-1);
    tracep->declBit(c+169,"iySWeb57", false,-1);
    tracep->declBus(c+342,"qAHqrjuoy", false,-1, 4,0);
    tracep->declQuad(c+167,"Y6GtStlxd", false,-1, 63,0);
    tracep->declBit(c+172,"iU9eTHOE", false,-1);
    tracep->declBus(c+343,"cjwWUjvzA", false,-1, 4,0);
    tracep->declQuad(c+170,"en8PtIPsi", false,-1, 63,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+195+i*2,"imsnW0", true,(i+0), 63,0);
    }
    tracep->declBus(c+356,"H", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+357+i*2,"oxMw", true,(i+0), 63,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("s7o2FNmy ");
    tracep->declBit(c+1006,"GFv", false,-1);
    tracep->declBus(c+333,"QQqE0R", false,-1, 31,0);
    tracep->declQuad(c+167,"nZgfwYMPis", false,-1, 63,0);
    tracep->declBit(c+169,"Nsz4lbgOeJV", false,-1);
    tracep->declBus(c+342,"wcqU5ueTTMKp", false,-1, 4,0);
    tracep->declQuad(c+170,"f3HkVuZKqF", false,-1, 63,0);
    tracep->declBit(c+172,"w36wdnIqkqw", false,-1);
    tracep->declBus(c+343,"kRMWeuBKEmIC", false,-1, 4,0);
    tracep->declBus(c+177,"b5FgibAO1U4M", false,-1, 7,0);
    tracep->declBit(c+344,"MShTPjvautFo", false,-1);
    tracep->declQuad(c+173,"LfmmAVsUOAh3l", false,-1, 63,0);
    tracep->declQuad(c+175,"DOHla3yUfRhRC", false,-1, 63,0);
    tracep->declBit(c+345,"MB7uIai8Vtn", false,-1);
    tracep->declQuad(c+346,"Ij1WIf77YjMCk0P", false,-1, 63,0);
    tracep->declBit(c+348,"jKbhLHOmf", false,-1);
    tracep->declQuad(c+349,"gyJsJtTcJbZkb", false,-1, 63,0);
    tracep->declBus(c+351,"Sllh1Ezp9IZIqYa", false,-1, 2,0);
    tracep->declBit(c+336,"oJ9dSqzdtZM", false,-1);
    tracep->declBit(c+337,"tWIXk2nzYYR", false,-1);
    tracep->declQuad(c+180,"U8nHEbYumypl", false,-1, 63,0);
    tracep->declBit(c+352,"BECXQ3iC", false,-1);
    tracep->declBit(c+336,"pGYEoK97", false,-1);
    tracep->declBus(c+353,"OA8Py3qa6", false,-1, 4,0);
    tracep->declBus(c+421,"ZgK2w", false,-1, 31,0);
    tracep->declBus(c+422,"R9GYY", false,-1, 20,0);
    tracep->declBus(c+423,"bEPRS", false,-1, 12,0);
    tracep->declBus(c+424,"ljuWe", false,-1, 11,0);
    tracep->declBus(c+425,"ZWT7B", false,-1, 11,0);
    tracep->declBus(c+426,"v212gv", false,-1, 6,0);
    tracep->declBus(c+427,"pI8", false,-1, 4,0);
    tracep->declBus(c+428,"z04", false,-1, 4,0);
    tracep->declBus(c+429,"I5AJbs", false,-1, 2,0);
    tracep->declBus(c+430,"nb", false,-1, 4,0);
    tracep->declBus(c+431,"gfIyT7", false,-1, 6,0);
    tracep->declQuad(c+432,"Sqk7XaBzon2D9v", false,-1, 63,0);
    tracep->declBit(c+434,"GQAE9Cct", false,-1);
    tracep->declBit(c+435,"QPShFtv4Dw", false,-1);
    tracep->declBit(c+436,"TuCoUBCD", false,-1);
    tracep->declBit(c+437,"ShXAdPB5O", false,-1);
    tracep->declBit(c+438,"YWBp3rEd", false,-1);
    tracep->declBit(c+439,"uP7s2O0a", false,-1);
    tracep->declBit(c+440,"RA58HofI", false,-1);
    tracep->declBit(c+441,"pX97QCtg", false,-1);
    tracep->declBit(c+442,"IDE3hK2uz", false,-1);
    tracep->declBit(c+443,"ycoCSReVj", false,-1);
    tracep->declBit(c+444,"nIiCfXy", false,-1);
    tracep->declBit(c+445,"INFMfFr", false,-1);
    tracep->declBit(c+446,"OkydoJc", false,-1);
    tracep->declBit(c+447,"G4mS4Qzt", false,-1);
    tracep->declBit(c+448,"YdPZj3Dq", false,-1);
    tracep->declBit(c+449,"C7aogzY", false,-1);
    tracep->declBit(c+450,"voYw5no", false,-1);
    tracep->declBit(c+451,"wWtUhx4", false,-1);
    tracep->declBit(c+452,"SzgUUYWIJ", false,-1);
    tracep->declBit(c+453,"u4KcONyV2", false,-1);
    tracep->declBit(c+454,"GbT8XbTzEJ", false,-1);
    tracep->declBit(c+455,"TYeqOMZzB", false,-1);
    tracep->declBit(c+456,"hTsfETwt", false,-1);
    tracep->declBit(c+457,"Pqvfr2zZE", false,-1);
    tracep->declBit(c+458,"wa0Zzdgim", false,-1);
    tracep->declBit(c+459,"QjcCGqv8V", false,-1);
    tracep->declBit(c+460,"qMhxEPDIY", false,-1);
    tracep->declBit(c+461,"wCAmo0T4", false,-1);
    tracep->declBit(c+462,"nzJk0CYt", false,-1);
    tracep->declBit(c+463,"KAZaki8Z", false,-1);
    tracep->declBit(c+464,"GryHxQYb", false,-1);
    tracep->declBit(c+465,"tM5lueYO1", false,-1);
    tracep->declBit(c+466,"JxgCKb0r", false,-1);
    tracep->declBit(c+467,"rFrUt3HA", false,-1);
    tracep->declBit(c+468,"CsytHqHJ", false,-1);
    tracep->declBit(c+469,"SVALFln", false,-1);
    tracep->declBit(c+470,"yz2lRBz7", false,-1);
    tracep->declBit(c+471,"WChG0j8I", false,-1);
    tracep->declBit(c+472,"CzgHuUSI", false,-1);
    tracep->declBit(c+473,"A66ucgr", false,-1);
    tracep->declBit(c+474,"Ljqmq49", false,-1);
    tracep->declBit(c+475,"mXoVztmUwG", false,-1);
    tracep->declBit(c+476,"dWa2lYZtw5", false,-1);
    tracep->declBit(c+477,"pngOwGCJUg", false,-1);
    tracep->declBit(c+478,"CTHw1Tw4JF", false,-1);
    tracep->declBit(c+479,"iBoxza85A", false,-1);
    tracep->declBit(c+480,"sDefmLkP9", false,-1);
    tracep->declBit(c+481,"tkNSPBbC4", false,-1);
    tracep->declBit(c+482,"vkhuKAwC7", false,-1);
    tracep->declBit(c+483,"LYUGKdPgW", false,-1);
    tracep->declBit(c+484,"ULxdVmE2P", false,-1);
    tracep->declBit(c+485,"lXMJdEC4Yj", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("yO7QPsT0y ");
    tracep->declBit(c+1005,"qRw", false,-1);
    tracep->declBit(c+1006,"GFv", false,-1);
    tracep->declBus(c+177,"QJ9hkSUr86g6", false,-1, 7,0);
    tracep->declBit(c+344,"Pfjw95PQlMmB", false,-1);
    tracep->declQuad(c+173,"rgW3lMDkqyNwd", false,-1, 63,0);
    tracep->declQuad(c+175,"fUFVvRbkqOOVT", false,-1, 63,0);
    tracep->declQuad(c+1,"hq6Uv7FRgdqu", false,-1, 63,0);
    tracep->declQuad(c+334,"dKWbtlnVzZKY", false,-1, 63,0);
    tracep->declBit(c+345,"IVQYajcaky2", false,-1);
    tracep->declQuad(c+346,"iBY1wF465kZc43I", false,-1, 63,0);
    tracep->declBit(c+348,"REAeHbGOa", false,-1);
    tracep->declQuad(c+349,"Fg0YJm19jg6un", false,-1, 63,0);
    tracep->declBit(c+164,"OUTEggu4pjvZO", false,-1);
    tracep->declQuad(c+165,"JDqNhAjgmujRj", false,-1, 63,0);
    tracep->declQuad(c+259,"ms6BV1DMBx", false,-1, 63,0);
    tracep->declBit(c+261,"Ha5GWqunguUc", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("RV_VECTOR ");
    tracep->declBit(c+1005,"clk", false,-1);
    tracep->declBit(c+1006,"rst", false,-1);
    tracep->declBus(c+333,"inst", false,-1, 31,0);
    tracep->declQuad(c+75,"vec_rs1_data", false,-1, 63,0);
    tracep->declBit(c+73,"vec_rs1_r_ena", false,-1);
    tracep->declBus(c+74,"vec_rs1_r_addr", false,-1, 4,0);
    tracep->declBit(c+77,"vram_r_ena", false,-1);
    tracep->declQuad(c+78,"vram_r_addr", false,-1, 63,0);
    tracep->declArray(c+80,"vram_r_data", false,-1, 511,0);
    tracep->declBit(c+1008,"vram_w_ena", false,-1);
    tracep->declQuad(c+78,"vram_w_addr", false,-1, 63,0);
    tracep->declArray(c+1009,"vram_w_data", false,-1, 511,0);
    tracep->declArray(c+1064,"vram_w_mask", false,-1, 511,0);
    tracep->declBit(c+73,"rs1_en", false,-1);
    tracep->declBus(c+74,"rs1_addr", false,-1, 4,0);
    tracep->declBit(c+262,"vs1_en", false,-1);
    tracep->declBus(c+263,"vs1_addr", false,-1, 4,0);
    tracep->declArray(c+1025,"vs1_dout", false,-1, 511,0);
    tracep->declBit(c+264,"vs2_en", false,-1);
    tracep->declBus(c+1041,"vs2_addr", false,-1, 4,0);
    tracep->declArray(c+1042,"vs2_dout", false,-1, 511,0);
    tracep->declBus(c+265,"valu_opcode", false,-1, 7,0);
    tracep->declArray(c+266,"operand_v1", false,-1, 511,0);
    tracep->declArray(c+282,"operand_v2", false,-1, 511,0);
    tracep->declBit(c+77,"vmem_ren", false,-1);
    tracep->declBit(c+1008,"vmem_wen", false,-1);
    tracep->declQuad(c+78,"vmem_addr", false,-1, 63,0);
    tracep->declArray(c+1009,"vmem_din", false,-1, 511,0);
    tracep->declBit(c+298,"vid_wb_en", false,-1);
    tracep->declBit(c+77,"vid_wb_sel", false,-1);
    tracep->declBit(c+1083,"vid_wb_split", false,-1);
    tracep->declBus(c+299,"vid_wb_addr", false,-1, 4,0);
    tracep->declArray(c+300,"valu_result", false,-1, 511,0);
    tracep->declArray(c+80,"vmem_dout", false,-1, 511,0);
    tracep->declBit(c+77,"vram_ren_int", false,-1);
    tracep->declBit(c+1008,"vram_wen_int", false,-1);
    tracep->declQuad(c+78,"vram_addr_int", false,-1, 63,0);
    tracep->declArray(c+1064,"vram_mask_int", false,-1, 511,0);
    tracep->declArray(c+1009,"vram_din_int", false,-1, 511,0);
    tracep->declBit(c+298,"vwb_en", false,-1);
    tracep->declBus(c+299,"vwb_addr", false,-1, 4,0);
    tracep->declArray(c+316,"vwb_data", false,-1, 511,0);
    tracep->pushNamePrefix("u_decode ");
    tracep->declBit(c+1006,"rst", false,-1);
    tracep->declBus(c+333,"inst_i", false,-1, 31,0);
    tracep->declBit(c+73,"rs1_en_o", false,-1);
    tracep->declBus(c+74,"rs1_addr_o", false,-1, 4,0);
    tracep->declQuad(c+75,"rs1_dout_i", false,-1, 63,0);
    tracep->declBit(c+262,"vs1_en_o", false,-1);
    tracep->declBus(c+263,"vs1_addr_o", false,-1, 4,0);
    tracep->declArray(c+1025,"vs1_dout_i", false,-1, 511,0);
    tracep->declBit(c+264,"vs2_en_o", false,-1);
    tracep->declBus(c+1041,"vs2_addr_o", false,-1, 4,0);
    tracep->declArray(c+1042,"vs2_dout_i", false,-1, 511,0);
    tracep->declBus(c+265,"valu_opcode_o", false,-1, 7,0);
    tracep->declArray(c+266,"operand_v1_o", false,-1, 511,0);
    tracep->declArray(c+282,"operand_v2_o", false,-1, 511,0);
    tracep->declBit(c+77,"vmem_ren_o", false,-1);
    tracep->declBit(c+1008,"vmem_wen_o", false,-1);
    tracep->declQuad(c+78,"vmem_addr_o", false,-1, 63,0);
    tracep->declArray(c+1009,"vmem_din_o", false,-1, 511,0);
    tracep->declBit(c+298,"vid_wb_en_o", false,-1);
    tracep->declBit(c+77,"vid_wb_sel_o", false,-1);
    tracep->declBit(c+1083,"vid_wb_split_o", false,-1);
    tracep->declBus(c+299,"vid_wb_addr_o", false,-1, 4,0);
    tracep->declBus(c+486,"funct6", false,-1, 5,0);
    tracep->declBit(c+487,"vm", false,-1);
    tracep->declBus(c+427,"rs2", false,-1, 4,0);
    tracep->declBus(c+428,"rs1", false,-1, 4,0);
    tracep->declBus(c+429,"funct3", false,-1, 2,0);
    tracep->declBus(c+430,"vd", false,-1, 4,0);
    tracep->declBus(c+431,"opcode", false,-1, 6,0);
    tracep->declBit(c+488,"inst_vle32_v", false,-1);
    tracep->declBit(c+489,"inst_vse32_v", false,-1);
    tracep->declBit(c+490,"inst_vadd_vv", false,-1);
    tracep->declBit(c+491,"inst_vmul_vv", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_execute ");
    tracep->declBit(c+1005,"clk", false,-1);
    tracep->declBit(c+1006,"rst", false,-1);
    tracep->declBus(c+265,"valu_opcode_i", false,-1, 7,0);
    tracep->declArray(c+266,"operand_v1_i", false,-1, 511,0);
    tracep->declArray(c+282,"operand_v2_i", false,-1, 511,0);
    tracep->declArray(c+300,"valu_result_o", false,-1, 511,0);
    tracep->declBus(c+332,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_mem ");
    tracep->declBit(c+77,"vmem_ren_i", false,-1);
    tracep->declBit(c+1008,"vmem_wen_i", false,-1);
    tracep->declQuad(c+78,"vmem_addr_i", false,-1, 63,0);
    tracep->declArray(c+1009,"vmem_din_i", false,-1, 511,0);
    tracep->declArray(c+80,"vmem_dout_o", false,-1, 511,0);
    tracep->declBit(c+77,"vram_ren_o", false,-1);
    tracep->declBit(c+1008,"vram_wen_o", false,-1);
    tracep->declQuad(c+78,"vram_addr_o", false,-1, 63,0);
    tracep->declArray(c+1064,"vram_mask_o", false,-1, 511,0);
    tracep->declArray(c+1009,"vram_din_o", false,-1, 511,0);
    tracep->declArray(c+80,"vram_dout_i", false,-1, 511,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_vregfile ");
    tracep->declBit(c+1005,"clk", false,-1);
    tracep->declBit(c+1006,"rst", false,-1);
    tracep->declBit(c+298,"vwb_en_i", false,-1);
    tracep->declBus(c+299,"vwb_addr_i", false,-1, 4,0);
    tracep->declArray(c+316,"vwb_data_i", false,-1, 511,0);
    tracep->declBit(c+262,"vs1_en_i", false,-1);
    tracep->declBus(c+263,"vs1_addr_i", false,-1, 4,0);
    tracep->declArray(c+1025,"vs1_data_o", false,-1, 511,0);
    tracep->declBit(c+264,"vs2_en_i", false,-1);
    tracep->declBus(c+1041,"vs2_addr_i", false,-1, 4,0);
    tracep->declArray(c+1042,"vs2_data_o", false,-1, 511,0);
    tracep->declBus(c+492,"i", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declArray(c+493+i*16,"vregfile", true,(i+0), 511,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_wb ");
    tracep->declBit(c+298,"vid_wb_en_i", false,-1);
    tracep->declBit(c+77,"vid_wb_sel_i", false,-1);
    tracep->declBit(c+1083,"vid_wb_split_i", false,-1);
    tracep->declBus(c+299,"vid_wb_addr_i", false,-1, 4,0);
    tracep->declArray(c+300,"valu_result_i", false,-1, 511,0);
    tracep->declArray(c+80,"vmem_result_i", false,-1, 511,0);
    tracep->declBit(c+298,"vwb_en_o", false,-1);
    tracep->declBus(c+299,"vwb_addr_o", false,-1, 4,0);
    tracep->declArray(c+316,"vwb_data_o", false,-1, 511,0);
    tracep->declArray(c+80,"mem_data_final", false,-1, 511,0);
    tracep->popNamePrefix(3);
}

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    // Body
    Vtop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vtop___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vtop___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vtop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

extern const VlWide<16>/*511:0*/ Vtop__ConstPool__CONST_h93e1b771_0;
extern const VlWide<16>/*511:0*/ Vtop__ConstPool__CONST_h8b2d9f06_0;

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<16>/*511:0*/ __Vtemp_hca969ada__0;
    VlWide<16>/*511:0*/ __Vtemp_h2e8613d8__0;
    VlWide<16>/*511:0*/ __Vtemp_haeb98438__0;
    VlWide<16>/*511:0*/ __Vtemp_h93ad85a7__0;
    // Body
    bufp->fullQData(oldp+1,(vlSelf->top__DOT__ram_r_addr),64);
    bufp->fullQData(oldp+3,(vlSelf->top__DOT__ram_r_data),64);
    bufp->fullQData(oldp+5,(((1U == (IData)(vlSelf->top__DOT__RV64I__DOT__Yb5ekIkGnKG8c))
                              ? ((0x3fU >= (0x38U & 
                                            ((IData)(vlSelf->top__DOT__ram_r_addr) 
                                             << 3U)))
                                  ? (((IData)(vlSelf->top__DOT__ram_w_ena)
                                       ? vlSelf->top__DOT__RV64I__DOT__MrCY1P97
                                       : 0ULL) << (0x38U 
                                                   & ((IData)(vlSelf->top__DOT__ram_r_addr) 
                                                      << 3U)))
                                  : 0ULL) : ((2U == (IData)(vlSelf->top__DOT__RV64I__DOT__Yb5ekIkGnKG8c))
                                              ? ((0x3fU 
                                                  >= 
                                                  (0x30U 
                                                   & ((IData)(
                                                              (vlSelf->top__DOT__ram_r_addr 
                                                               >> 1U)) 
                                                      << 4U)))
                                                  ? 
                                                 (((IData)(vlSelf->top__DOT__ram_w_ena)
                                                    ? vlSelf->top__DOT__RV64I__DOT__MrCY1P97
                                                    : 0ULL) 
                                                  << 
                                                  (0x30U 
                                                   & ((IData)(
                                                              (vlSelf->top__DOT__ram_r_addr 
                                                               >> 1U)) 
                                                      << 4U)))
                                                  : 0ULL)
                                              : ((3U 
                                                  == (IData)(vlSelf->top__DOT__RV64I__DOT__Yb5ekIkGnKG8c))
                                                  ? 
                                                 ((0x3fU 
                                                   >= 
                                                   (0x20U 
                                                    & ((IData)(
                                                               (vlSelf->top__DOT__ram_r_addr 
                                                                >> 2U)) 
                                                       << 5U)))
                                                   ? 
                                                  (((IData)(vlSelf->top__DOT__ram_w_ena)
                                                     ? vlSelf->top__DOT__RV64I__DOT__MrCY1P97
                                                     : 0ULL) 
                                                   << 
                                                   (0x20U 
                                                    & ((IData)(
                                                               (vlSelf->top__DOT__ram_r_addr 
                                                                >> 2U)) 
                                                       << 5U)))
                                                   : 0ULL)
                                                  : 
                                                 ((7U 
                                                   == (IData)(vlSelf->top__DOT__RV64I__DOT__Yb5ekIkGnKG8c))
                                                   ? 
                                                  ((IData)(vlSelf->top__DOT__ram_w_ena)
                                                    ? vlSelf->top__DOT__RV64I__DOT__MrCY1P97
                                                    : 0ULL)
                                                   : 0ULL))))),64);
    bufp->fullQData(oldp+7,(((IData)(vlSelf->top__DOT__ram_w_ena)
                              ? ((1U == (IData)(vlSelf->top__DOT__RV64I__DOT__Yb5ekIkGnKG8c))
                                  ? ((0U == (7U & (IData)(vlSelf->top__DOT__ram_r_addr)))
                                      ? 0xffULL : (
                                                   (1U 
                                                    == 
                                                    (7U 
                                                     & (IData)(vlSelf->top__DOT__ram_r_addr)))
                                                    ? 0xff00ULL
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (7U 
                                                      & (IData)(vlSelf->top__DOT__ram_r_addr)))
                                                     ? 0xff0000ULL
                                                     : 
                                                    ((3U 
                                                      == 
                                                      (7U 
                                                       & (IData)(vlSelf->top__DOT__ram_r_addr)))
                                                      ? 0xff000000ULL
                                                      : 
                                                     ((4U 
                                                       == 
                                                       (7U 
                                                        & (IData)(vlSelf->top__DOT__ram_r_addr)))
                                                       ? 0xff00000000ULL
                                                       : 
                                                      ((5U 
                                                        == 
                                                        (7U 
                                                         & (IData)(vlSelf->top__DOT__ram_r_addr)))
                                                        ? 0xff0000000000ULL
                                                        : 
                                                       ((6U 
                                                         == 
                                                         (7U 
                                                          & (IData)(vlSelf->top__DOT__ram_r_addr)))
                                                         ? 0xff000000000000ULL
                                                         : 
                                                        ((7U 
                                                          == 
                                                          (7U 
                                                           & (IData)(vlSelf->top__DOT__ram_r_addr)))
                                                          ? 0xff00000000000000ULL
                                                          : 0ULL))))))))
                                  : ((2U == (IData)(vlSelf->top__DOT__RV64I__DOT__Yb5ekIkGnKG8c))
                                      ? ((0U == (3U 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__ram_r_addr 
                                                            >> 1U))))
                                          ? 0xffffULL
                                          : ((1U == 
                                              (3U & (IData)(
                                                            (vlSelf->top__DOT__ram_r_addr 
                                                             >> 1U))))
                                              ? 0xffff0000ULL
                                              : ((2U 
                                                  == 
                                                  (3U 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__ram_r_addr 
                                                              >> 1U))))
                                                  ? 0xffff00000000ULL
                                                  : 
                                                 ((3U 
                                                   == 
                                                   (3U 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__ram_r_addr 
                                                               >> 1U))))
                                                   ? 0xffff000000000000ULL
                                                   : 0ULL))))
                                      : ((3U == (IData)(vlSelf->top__DOT__RV64I__DOT__Yb5ekIkGnKG8c))
                                          ? ((1U & (IData)(
                                                           (vlSelf->top__DOT__ram_r_addr 
                                                            >> 2U)))
                                              ? 0xffffffff00000000ULL
                                              : 0xffffffffULL)
                                          : ((7U == (IData)(vlSelf->top__DOT__RV64I__DOT__Yb5ekIkGnKG8c))
                                              ? 0xffffffffffffffffULL
                                              : 0ULL))))
                              : 0ULL)),64);
    bufp->fullQData(oldp+9,(vlSelf->top__DOT__regs[0]),64);
    bufp->fullQData(oldp+11,(vlSelf->top__DOT__regs[1]),64);
    bufp->fullQData(oldp+13,(vlSelf->top__DOT__regs[2]),64);
    bufp->fullQData(oldp+15,(vlSelf->top__DOT__regs[3]),64);
    bufp->fullQData(oldp+17,(vlSelf->top__DOT__regs[4]),64);
    bufp->fullQData(oldp+19,(vlSelf->top__DOT__regs[5]),64);
    bufp->fullQData(oldp+21,(vlSelf->top__DOT__regs[6]),64);
    bufp->fullQData(oldp+23,(vlSelf->top__DOT__regs[7]),64);
    bufp->fullQData(oldp+25,(vlSelf->top__DOT__regs[8]),64);
    bufp->fullQData(oldp+27,(vlSelf->top__DOT__regs[9]),64);
    bufp->fullQData(oldp+29,(vlSelf->top__DOT__regs[10]),64);
    bufp->fullQData(oldp+31,(vlSelf->top__DOT__regs[11]),64);
    bufp->fullQData(oldp+33,(vlSelf->top__DOT__regs[12]),64);
    bufp->fullQData(oldp+35,(vlSelf->top__DOT__regs[13]),64);
    bufp->fullQData(oldp+37,(vlSelf->top__DOT__regs[14]),64);
    bufp->fullQData(oldp+39,(vlSelf->top__DOT__regs[15]),64);
    bufp->fullQData(oldp+41,(vlSelf->top__DOT__regs[16]),64);
    bufp->fullQData(oldp+43,(vlSelf->top__DOT__regs[17]),64);
    bufp->fullQData(oldp+45,(vlSelf->top__DOT__regs[18]),64);
    bufp->fullQData(oldp+47,(vlSelf->top__DOT__regs[19]),64);
    bufp->fullQData(oldp+49,(vlSelf->top__DOT__regs[20]),64);
    bufp->fullQData(oldp+51,(vlSelf->top__DOT__regs[21]),64);
    bufp->fullQData(oldp+53,(vlSelf->top__DOT__regs[22]),64);
    bufp->fullQData(oldp+55,(vlSelf->top__DOT__regs[23]),64);
    bufp->fullQData(oldp+57,(vlSelf->top__DOT__regs[24]),64);
    bufp->fullQData(oldp+59,(vlSelf->top__DOT__regs[25]),64);
    bufp->fullQData(oldp+61,(vlSelf->top__DOT__regs[26]),64);
    bufp->fullQData(oldp+63,(vlSelf->top__DOT__regs[27]),64);
    bufp->fullQData(oldp+65,(vlSelf->top__DOT__regs[28]),64);
    bufp->fullQData(oldp+67,(vlSelf->top__DOT__regs[29]),64);
    bufp->fullQData(oldp+69,(vlSelf->top__DOT__regs[30]),64);
    bufp->fullQData(oldp+71,(vlSelf->top__DOT__regs[31]),64);
    bufp->fullBit(oldp+73,(vlSelf->top__DOT__vec_rs1_r_ena));
    bufp->fullCData(oldp+74,(((IData)(vlSelf->top__DOT__vec_rs1_r_ena)
                               ? (0x1fU & (vlSelf->top__DOT__inst 
                                           >> 0xfU))
                               : 0U)),5);
    bufp->fullQData(oldp+75,(((IData)(vlSelf->top__DOT__vec_rs1_r_ena)
                               ? vlSelf->top__DOT__regs
                              [((IData)(vlSelf->top__DOT__vec_rs1_r_ena)
                                 ? (0x1fU & (vlSelf->top__DOT__inst 
                                             >> 0xfU))
                                 : 0U)] : 0ULL)),64);
    bufp->fullBit(oldp+77,(vlSelf->top__DOT__vram_r_ena));
    bufp->fullQData(oldp+78,(vlSelf->top__DOT__vram_r_addr),64);
    bufp->fullWData(oldp+80,(vlSelf->top__DOT__vram_r_data),512);
    bufp->fullQData(oldp+96,(((vlSelf->top__DOT__ram_r_addr 
                               - 0x80000000ULL) >> 3U)),64);
    bufp->fullQData(oldp+98,(((vlSelf->top__DOT__vram_r_addr 
                               - 0x80000000ULL) >> 3U)),64);
    bufp->fullQData(oldp+100,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[0]),64);
    bufp->fullQData(oldp+102,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[1]),64);
    bufp->fullQData(oldp+104,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[2]),64);
    bufp->fullQData(oldp+106,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[3]),64);
    bufp->fullQData(oldp+108,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[4]),64);
    bufp->fullQData(oldp+110,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[5]),64);
    bufp->fullQData(oldp+112,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[6]),64);
    bufp->fullQData(oldp+114,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[7]),64);
    bufp->fullQData(oldp+116,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[8]),64);
    bufp->fullQData(oldp+118,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[9]),64);
    bufp->fullQData(oldp+120,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[10]),64);
    bufp->fullQData(oldp+122,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[11]),64);
    bufp->fullQData(oldp+124,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[12]),64);
    bufp->fullQData(oldp+126,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[13]),64);
    bufp->fullQData(oldp+128,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[14]),64);
    bufp->fullQData(oldp+130,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[15]),64);
    bufp->fullQData(oldp+132,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[16]),64);
    bufp->fullQData(oldp+134,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[17]),64);
    bufp->fullQData(oldp+136,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[18]),64);
    bufp->fullQData(oldp+138,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[19]),64);
    bufp->fullQData(oldp+140,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[20]),64);
    bufp->fullQData(oldp+142,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[21]),64);
    bufp->fullQData(oldp+144,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[22]),64);
    bufp->fullQData(oldp+146,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[23]),64);
    bufp->fullQData(oldp+148,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[24]),64);
    bufp->fullQData(oldp+150,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[25]),64);
    bufp->fullQData(oldp+152,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[26]),64);
    bufp->fullQData(oldp+154,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[27]),64);
    bufp->fullQData(oldp+156,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[28]),64);
    bufp->fullQData(oldp+158,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[29]),64);
    bufp->fullQData(oldp+160,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[30]),64);
    bufp->fullQData(oldp+162,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[31]),64);
    bufp->fullBit(oldp+164,(((IData)(vlSelf->top__DOT__RV64I__DOT__yO7QPsT0y__DOT__Ha5GWqunguUc) 
                             | (IData)(vlSelf->top__DOT__RV64I__DOT__wWjUJ9g))));
    bufp->fullQData(oldp+165,(vlSelf->top__DOT__RV64I__DOT__epavvrInwBl),64);
    bufp->fullQData(oldp+167,(vlSelf->top__DOT__RV64I__DOT__X5fLoFTh),64);
    bufp->fullBit(oldp+169,(vlSelf->top__DOT__RV64I__DOT__plyN9CKEI));
    bufp->fullQData(oldp+170,(vlSelf->top__DOT__RV64I__DOT__MrCY1P97),64);
    bufp->fullBit(oldp+172,(vlSelf->top__DOT__RV64I__DOT__stsrseQpu));
    bufp->fullQData(oldp+173,(vlSelf->top__DOT__RV64I__DOT__BvitSgq1Hyw),64);
    bufp->fullQData(oldp+175,(vlSelf->top__DOT__RV64I__DOT__Lv5ku5dc93v),64);
    bufp->fullCData(oldp+177,(vlSelf->top__DOT__RV64I__DOT__FsjRBjnjb1),8);
    bufp->fullQData(oldp+178,(((1U == (IData)(vlSelf->top__DOT__RV64I__DOT__Yb5ekIkGnKG8c))
                                ? (((- (QData)((IData)(
                                                       (1U 
                                                        & ((IData)(vlSelf->top__DOT__RV64I__DOT__jjI7ZAzN2__DOT__ZxFtpStHVWm) 
                                                           >> 7U))))) 
                                    << 8U) | (QData)((IData)(vlSelf->top__DOT__RV64I__DOT__jjI7ZAzN2__DOT__ZxFtpStHVWm)))
                                : ((4U == (IData)(vlSelf->top__DOT__RV64I__DOT__Yb5ekIkGnKG8c))
                                    ? (QData)((IData)(vlSelf->top__DOT__RV64I__DOT__jjI7ZAzN2__DOT__ZxFtpStHVWm))
                                    : ((2U == (IData)(vlSelf->top__DOT__RV64I__DOT__Yb5ekIkGnKG8c))
                                        ? (((- (QData)((IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->top__DOT__RV64I__DOT__jjI7ZAzN2__DOT__bEdFnqpLQFY) 
                                                                   >> 0xfU))))) 
                                            << 0x10U) 
                                           | (QData)((IData)(vlSelf->top__DOT__RV64I__DOT__jjI7ZAzN2__DOT__bEdFnqpLQFY)))
                                        : ((5U == (IData)(vlSelf->top__DOT__RV64I__DOT__Yb5ekIkGnKG8c))
                                            ? (QData)((IData)(vlSelf->top__DOT__RV64I__DOT__jjI7ZAzN2__DOT__bEdFnqpLQFY))
                                            : ((3U 
                                                == (IData)(vlSelf->top__DOT__RV64I__DOT__Yb5ekIkGnKG8c))
                                                ? (
                                                   ((QData)((IData)(
                                                                    (- (IData)(
                                                                               (vlSelf->top__DOT__RV64I__DOT__jjI7ZAzN2__DOT__sKJju8Xgr7C 
                                                                                >> 0x1fU))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(vlSelf->top__DOT__RV64I__DOT__jjI7ZAzN2__DOT__sKJju8Xgr7C)))
                                                : (
                                                   (6U 
                                                    == (IData)(vlSelf->top__DOT__RV64I__DOT__Yb5ekIkGnKG8c))
                                                    ? (QData)((IData)(vlSelf->top__DOT__RV64I__DOT__jjI7ZAzN2__DOT__sKJju8Xgr7C))
                                                    : 
                                                   ((7U 
                                                     == (IData)(vlSelf->top__DOT__RV64I__DOT__Yb5ekIkGnKG8c))
                                                     ? vlSelf->top__DOT__ram_r_data
                                                     : 0ULL)))))))),64);
    bufp->fullQData(oldp+180,(((IData)(vlSelf->top__DOT__ram_w_ena)
                                ? vlSelf->top__DOT__RV64I__DOT__MrCY1P97
                                : 0ULL)),64);
    bufp->fullBit(oldp+182,(vlSelf->top__DOT__RV64I__DOT__CP5BekSY));
    bufp->fullCData(oldp+183,(vlSelf->top__DOT__RV64I__DOT__fjN1GhT7w),5);
    bufp->fullQData(oldp+184,(vlSelf->top__DOT__RV64I__DOT__cSWijWYsS),64);
    bufp->fullIData(oldp+186,(vlSelf->top__DOT__RV64I__DOT__jjI7ZAzN2__DOT__sKJju8Xgr7C),32);
    bufp->fullSData(oldp+187,(vlSelf->top__DOT__RV64I__DOT__jjI7ZAzN2__DOT__bEdFnqpLQFY),16);
    bufp->fullCData(oldp+188,(vlSelf->top__DOT__RV64I__DOT__jjI7ZAzN2__DOT__ZxFtpStHVWm),8);
    bufp->fullQData(oldp+189,(((1U & (IData)((vlSelf->top__DOT__ram_r_addr 
                                              >> 2U)))
                                ? 0xffffffff00000000ULL
                                : 0xffffffffULL)),64);
    bufp->fullQData(oldp+191,(((0U == (3U & (IData)(
                                                    (vlSelf->top__DOT__ram_r_addr 
                                                     >> 1U))))
                                ? 0xffffULL : ((1U 
                                                == 
                                                (3U 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__ram_r_addr 
                                                            >> 1U))))
                                                ? 0xffff0000ULL
                                                : (
                                                   (2U 
                                                    == 
                                                    (3U 
                                                     & (IData)(
                                                               (vlSelf->top__DOT__ram_r_addr 
                                                                >> 1U))))
                                                    ? 0xffff00000000ULL
                                                    : 
                                                   ((3U 
                                                     == 
                                                     (3U 
                                                      & (IData)(
                                                                (vlSelf->top__DOT__ram_r_addr 
                                                                 >> 1U))))
                                                     ? 0xffff000000000000ULL
                                                     : 0ULL))))),64);
    bufp->fullQData(oldp+193,(((0U == (7U & (IData)(vlSelf->top__DOT__ram_r_addr)))
                                ? 0xffULL : ((1U == 
                                              (7U & (IData)(vlSelf->top__DOT__ram_r_addr)))
                                              ? 0xff00ULL
                                              : ((2U 
                                                  == 
                                                  (7U 
                                                   & (IData)(vlSelf->top__DOT__ram_r_addr)))
                                                  ? 0xff0000ULL
                                                  : 
                                                 ((3U 
                                                   == 
                                                   (7U 
                                                    & (IData)(vlSelf->top__DOT__ram_r_addr)))
                                                   ? 0xff000000ULL
                                                   : 
                                                  ((4U 
                                                    == 
                                                    (7U 
                                                     & (IData)(vlSelf->top__DOT__ram_r_addr)))
                                                    ? 0xff00000000ULL
                                                    : 
                                                   ((5U 
                                                     == 
                                                     (7U 
                                                      & (IData)(vlSelf->top__DOT__ram_r_addr)))
                                                     ? 0xff0000000000ULL
                                                     : 
                                                    ((6U 
                                                      == 
                                                      (7U 
                                                       & (IData)(vlSelf->top__DOT__ram_r_addr)))
                                                      ? 0xff000000000000ULL
                                                      : 
                                                     ((7U 
                                                       == 
                                                       (7U 
                                                        & (IData)(vlSelf->top__DOT__ram_r_addr)))
                                                       ? 0xff00000000000000ULL
                                                       : 0ULL))))))))),64);
    bufp->fullQData(oldp+195,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[0]),64);
    bufp->fullQData(oldp+197,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[1]),64);
    bufp->fullQData(oldp+199,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[2]),64);
    bufp->fullQData(oldp+201,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[3]),64);
    bufp->fullQData(oldp+203,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[4]),64);
    bufp->fullQData(oldp+205,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[5]),64);
    bufp->fullQData(oldp+207,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[6]),64);
    bufp->fullQData(oldp+209,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[7]),64);
    bufp->fullQData(oldp+211,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[8]),64);
    bufp->fullQData(oldp+213,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[9]),64);
    bufp->fullQData(oldp+215,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[10]),64);
    bufp->fullQData(oldp+217,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[11]),64);
    bufp->fullQData(oldp+219,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[12]),64);
    bufp->fullQData(oldp+221,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[13]),64);
    bufp->fullQData(oldp+223,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[14]),64);
    bufp->fullQData(oldp+225,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[15]),64);
    bufp->fullQData(oldp+227,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[16]),64);
    bufp->fullQData(oldp+229,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[17]),64);
    bufp->fullQData(oldp+231,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[18]),64);
    bufp->fullQData(oldp+233,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[19]),64);
    bufp->fullQData(oldp+235,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[20]),64);
    bufp->fullQData(oldp+237,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[21]),64);
    bufp->fullQData(oldp+239,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[22]),64);
    bufp->fullQData(oldp+241,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[23]),64);
    bufp->fullQData(oldp+243,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[24]),64);
    bufp->fullQData(oldp+245,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[25]),64);
    bufp->fullQData(oldp+247,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[26]),64);
    bufp->fullQData(oldp+249,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[27]),64);
    bufp->fullQData(oldp+251,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[28]),64);
    bufp->fullQData(oldp+253,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[29]),64);
    bufp->fullQData(oldp+255,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[30]),64);
    bufp->fullQData(oldp+257,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[31]),64);
    bufp->fullQData(oldp+259,(vlSelf->top__DOT__RV64I__DOT__yO7QPsT0y__DOT__ms6BV1DMBx),64);
    bufp->fullBit(oldp+261,(vlSelf->top__DOT__RV64I__DOT__yO7QPsT0y__DOT__Ha5GWqunguUc));
    bufp->fullBit(oldp+262,(vlSelf->top__DOT__RV_VECTOR__DOT__vs1_en));
    bufp->fullCData(oldp+263,(((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs1_en)
                                ? (0x1fU & (vlSelf->top__DOT__inst 
                                            >> 0xfU))
                                : 0U)),5);
    bufp->fullBit(oldp+264,(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_en));
    bufp->fullCData(oldp+265,(vlSelf->top__DOT__RV_VECTOR__DOT__valu_opcode),8);
    bufp->fullWData(oldp+266,(vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1),512);
    bufp->fullWData(oldp+282,(vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2),512);
    bufp->fullBit(oldp+298,(vlSelf->top__DOT__RV_VECTOR__DOT__vid_wb_en));
    bufp->fullCData(oldp+299,(vlSelf->top__DOT__RV_VECTOR__DOT__vid_wb_addr),5);
    bufp->fullWData(oldp+300,(vlSelf->top__DOT__RV_VECTOR__DOT__valu_result),512);
    if (vlSelf->top__DOT__vram_r_ena) {
        __Vtemp_hca969ada__0[0U] = vlSelf->top__DOT__vram_r_data[0U];
        __Vtemp_hca969ada__0[1U] = vlSelf->top__DOT__vram_r_data[1U];
        __Vtemp_hca969ada__0[2U] = vlSelf->top__DOT__vram_r_data[2U];
        __Vtemp_hca969ada__0[3U] = vlSelf->top__DOT__vram_r_data[3U];
        __Vtemp_hca969ada__0[4U] = vlSelf->top__DOT__vram_r_data[4U];
        __Vtemp_hca969ada__0[5U] = vlSelf->top__DOT__vram_r_data[5U];
        __Vtemp_hca969ada__0[6U] = vlSelf->top__DOT__vram_r_data[6U];
        __Vtemp_hca969ada__0[7U] = vlSelf->top__DOT__vram_r_data[7U];
        __Vtemp_hca969ada__0[8U] = vlSelf->top__DOT__vram_r_data[8U];
        __Vtemp_hca969ada__0[9U] = vlSelf->top__DOT__vram_r_data[9U];
        __Vtemp_hca969ada__0[0xaU] = vlSelf->top__DOT__vram_r_data[0xaU];
        __Vtemp_hca969ada__0[0xbU] = vlSelf->top__DOT__vram_r_data[0xbU];
        __Vtemp_hca969ada__0[0xcU] = vlSelf->top__DOT__vram_r_data[0xcU];
        __Vtemp_hca969ada__0[0xdU] = vlSelf->top__DOT__vram_r_data[0xdU];
        __Vtemp_hca969ada__0[0xeU] = vlSelf->top__DOT__vram_r_data[0xeU];
        __Vtemp_hca969ada__0[0xfU] = vlSelf->top__DOT__vram_r_data[0xfU];
    } else {
        __Vtemp_hca969ada__0[0U] = vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[0U];
        __Vtemp_hca969ada__0[1U] = vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[1U];
        __Vtemp_hca969ada__0[2U] = vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[2U];
        __Vtemp_hca969ada__0[3U] = vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[3U];
        __Vtemp_hca969ada__0[4U] = vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[4U];
        __Vtemp_hca969ada__0[5U] = vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[5U];
        __Vtemp_hca969ada__0[6U] = vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[6U];
        __Vtemp_hca969ada__0[7U] = vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[7U];
        __Vtemp_hca969ada__0[8U] = vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[8U];
        __Vtemp_hca969ada__0[9U] = vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[9U];
        __Vtemp_hca969ada__0[0xaU] = vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[0xaU];
        __Vtemp_hca969ada__0[0xbU] = vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[0xbU];
        __Vtemp_hca969ada__0[0xcU] = vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[0xcU];
        __Vtemp_hca969ada__0[0xdU] = vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[0xdU];
        __Vtemp_hca969ada__0[0xeU] = vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[0xeU];
        __Vtemp_hca969ada__0[0xfU] = vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[0xfU];
    }
    bufp->fullWData(oldp+316,(__Vtemp_hca969ada__0),512);
    bufp->fullIData(oldp+332,(vlSelf->top__DOT__RV_VECTOR__DOT__u_execute__DOT__i),32);
    bufp->fullIData(oldp+333,(vlSelf->top__DOT__inst),32);
    bufp->fullQData(oldp+334,(vlSelf->top__DOT__RV64I__DOT__eD5A2ng0__DOT__nlju),64);
    bufp->fullBit(oldp+336,(vlSelf->top__DOT__ram_r_ena));
    bufp->fullBit(oldp+337,(vlSelf->top__DOT__ram_w_ena));
    bufp->fullQData(oldp+338,(vlSelf->top__DOT__rom_rdata),64);
    bufp->fullQData(oldp+340,(((vlSelf->top__DOT__RV64I__DOT__eD5A2ng0__DOT__nlju 
                                - 0x80000000ULL) >> 3U)),64);
    bufp->fullCData(oldp+342,((0x1fU & ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT____VdfgTmp_h9a5b570a__0)
                                         ? (0x1fU & 
                                            (vlSelf->top__DOT__inst 
                                             >> 0xfU))
                                         : ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT____VdfgTmp_hcca47e61__0)
                                             ? 0xaU
                                             : 0U)))),5);
    bufp->fullCData(oldp+343,((0x1fU & ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT____VdfgTmp_h2869f3d5__0)
                                         ? (0x1fU & 
                                            (vlSelf->top__DOT__inst 
                                             >> 0x14U))
                                         : ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT____VdfgTmp_hcca47e61__0)
                                             ? 0xaU
                                             : 0U)))),5);
    bufp->fullBit(oldp+344,(((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__mXoVztmUwG) 
                             | ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__iBoxza85A) 
                                | ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__sDefmLkP9) 
                                   | ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__tkNSPBbC4) 
                                      | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__dWa2lYZtw5)))))));
    bufp->fullBit(oldp+345,(vlSelf->top__DOT__RV64I__DOT__D7oya5Igy));
    bufp->fullQData(oldp+346,(vlSelf->top__DOT__RV64I__DOT__gY53pm6Uc1a5z),64);
    bufp->fullBit(oldp+348,(vlSelf->top__DOT__RV64I__DOT__wWjUJ9g));
    bufp->fullQData(oldp+349,(((IData)(vlSelf->top__DOT__RV64I__DOT__wWjUJ9g)
                                ? vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT____VdfgTmp_h79b66c0f__0
                                : 0ULL)),64);
    bufp->fullCData(oldp+351,(vlSelf->top__DOT__RV64I__DOT__Yb5ekIkGnKG8c),3);
    bufp->fullBit(oldp+352,(vlSelf->top__DOT__RV64I__DOT__z0MsdO));
    bufp->fullCData(oldp+353,(((IData)(vlSelf->top__DOT__RV64I__DOT__z0MsdO)
                                ? (0x1fU & (vlSelf->top__DOT__inst 
                                            >> 7U))
                                : 0U)),5);
    bufp->fullQData(oldp+354,(vlSelf->top__DOT__RV64I__DOT__eD5A2ng0__DOT__db),64);
    bufp->fullIData(oldp+356,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__H),32);
    bufp->fullQData(oldp+357,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[0]),64);
    bufp->fullQData(oldp+359,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[1]),64);
    bufp->fullQData(oldp+361,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[2]),64);
    bufp->fullQData(oldp+363,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[3]),64);
    bufp->fullQData(oldp+365,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[4]),64);
    bufp->fullQData(oldp+367,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[5]),64);
    bufp->fullQData(oldp+369,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[6]),64);
    bufp->fullQData(oldp+371,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[7]),64);
    bufp->fullQData(oldp+373,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[8]),64);
    bufp->fullQData(oldp+375,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[9]),64);
    bufp->fullQData(oldp+377,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[10]),64);
    bufp->fullQData(oldp+379,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[11]),64);
    bufp->fullQData(oldp+381,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[12]),64);
    bufp->fullQData(oldp+383,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[13]),64);
    bufp->fullQData(oldp+385,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[14]),64);
    bufp->fullQData(oldp+387,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[15]),64);
    bufp->fullQData(oldp+389,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[16]),64);
    bufp->fullQData(oldp+391,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[17]),64);
    bufp->fullQData(oldp+393,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[18]),64);
    bufp->fullQData(oldp+395,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[19]),64);
    bufp->fullQData(oldp+397,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[20]),64);
    bufp->fullQData(oldp+399,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[21]),64);
    bufp->fullQData(oldp+401,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[22]),64);
    bufp->fullQData(oldp+403,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[23]),64);
    bufp->fullQData(oldp+405,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[24]),64);
    bufp->fullQData(oldp+407,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[25]),64);
    bufp->fullQData(oldp+409,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[26]),64);
    bufp->fullQData(oldp+411,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[27]),64);
    bufp->fullQData(oldp+413,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[28]),64);
    bufp->fullQData(oldp+415,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[29]),64);
    bufp->fullQData(oldp+417,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[30]),64);
    bufp->fullQData(oldp+419,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[31]),64);
    bufp->fullIData(oldp+421,((0xfffff000U & vlSelf->top__DOT__inst)),32);
    bufp->fullIData(oldp+422,(((0x100000U & (vlSelf->top__DOT__inst 
                                             >> 0xbU)) 
                               | ((0xff000U & vlSelf->top__DOT__inst) 
                                  | ((0x800U & (vlSelf->top__DOT__inst 
                                                >> 9U)) 
                                     | (0x7feU & (vlSelf->top__DOT__inst 
                                                  >> 0x14U)))))),21);
    bufp->fullSData(oldp+423,(((0x1000U & (vlSelf->top__DOT__inst 
                                           >> 0x13U)) 
                               | ((0x800U & (vlSelf->top__DOT__inst 
                                             << 4U)) 
                                  | ((0x7e0U & (vlSelf->top__DOT__inst 
                                                >> 0x14U)) 
                                     | (0x1eU & (vlSelf->top__DOT__inst 
                                                 >> 7U)))))),13);
    bufp->fullSData(oldp+424,(((0xfe0U & (vlSelf->top__DOT__inst 
                                          >> 0x14U)) 
                               | (0x1fU & (vlSelf->top__DOT__inst 
                                           >> 7U)))),12);
    bufp->fullSData(oldp+425,((vlSelf->top__DOT__inst 
                               >> 0x14U)),12);
    bufp->fullCData(oldp+426,((vlSelf->top__DOT__inst 
                               >> 0x19U)),7);
    bufp->fullCData(oldp+427,((0x1fU & (vlSelf->top__DOT__inst 
                                        >> 0x14U))),5);
    bufp->fullCData(oldp+428,((0x1fU & (vlSelf->top__DOT__inst 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+429,((7U & (vlSelf->top__DOT__inst 
                                     >> 0xcU))),3);
    bufp->fullCData(oldp+430,((0x1fU & (vlSelf->top__DOT__inst 
                                        >> 7U))),5);
    bufp->fullCData(oldp+431,((0x7fU & vlSelf->top__DOT__inst)),7);
    bufp->fullQData(oldp+432,(((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT____VdfgTmp_hc944f92e__0)
                                ? vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT____VdfgTmp_h12d051ae__0
                                : ((IData)(vlSelf->top__DOT__ram_r_ena)
                                    ? vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT____VdfgTmp_h12d051ae__0
                                    : ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT____VdfgTmp_hb88e4699__0)
                                        ? (QData)((IData)(
                                                          (0x3fU 
                                                           & (vlSelf->top__DOT__inst 
                                                              >> 0x14U))))
                                        : ((IData)(vlSelf->top__DOT__ram_w_ena)
                                            ? (((- (QData)((IData)(
                                                                   (vlSelf->top__DOT__inst 
                                                                    >> 0x1fU)))) 
                                                << 0xcU) 
                                               | (QData)((IData)(
                                                                 ((0xfe0U 
                                                                   & (vlSelf->top__DOT__inst 
                                                                      >> 0x14U)) 
                                                                  | (0x1fU 
                                                                     & (vlSelf->top__DOT__inst 
                                                                        >> 7U))))))
                                            : ((0x6fU 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->top__DOT__inst))
                                                ? vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT____VdfgTmp_h79b66c0f__0
                                                : ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT____VdfgTmp_hd1cd3f69__0)
                                                    ? 
                                                   (((QData)((IData)(
                                                                     (- (IData)(
                                                                                (vlSelf->top__DOT__inst 
                                                                                >> 0x1fU))))) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      (0xfffff000U 
                                                                       & vlSelf->top__DOT__inst))))
                                                    : 0ULL))))))),64);
    bufp->fullBit(oldp+434,((0x37U == (0x7fU & vlSelf->top__DOT__inst))));
    bufp->fullBit(oldp+435,((0x17U == (0x7fU & vlSelf->top__DOT__inst))));
    bufp->fullBit(oldp+436,((0x6fU == (0x7fU & vlSelf->top__DOT__inst))));
    bufp->fullBit(oldp+437,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__ShXAdPB5O));
    bufp->fullBit(oldp+438,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__YWBp3rEd));
    bufp->fullBit(oldp+439,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__uP7s2O0a));
    bufp->fullBit(oldp+440,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__RA58HofI));
    bufp->fullBit(oldp+441,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__pX97QCtg));
    bufp->fullBit(oldp+442,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__IDE3hK2uz));
    bufp->fullBit(oldp+443,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__ycoCSReVj));
    bufp->fullBit(oldp+444,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__nIiCfXy));
    bufp->fullBit(oldp+445,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__INFMfFr));
    bufp->fullBit(oldp+446,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__OkydoJc));
    bufp->fullBit(oldp+447,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__G4mS4Qzt));
    bufp->fullBit(oldp+448,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__YdPZj3Dq));
    bufp->fullBit(oldp+449,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__C7aogzY));
    bufp->fullBit(oldp+450,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__voYw5no));
    bufp->fullBit(oldp+451,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__wWtUhx4));
    bufp->fullBit(oldp+452,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__SzgUUYWIJ));
    bufp->fullBit(oldp+453,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__u4KcONyV2));
    bufp->fullBit(oldp+454,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__GbT8XbTzEJ));
    bufp->fullBit(oldp+455,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__TYeqOMZzB));
    bufp->fullBit(oldp+456,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__hTsfETwt));
    bufp->fullBit(oldp+457,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__Pqvfr2zZE));
    bufp->fullBit(oldp+458,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__wa0Zzdgim));
    bufp->fullBit(oldp+459,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__QjcCGqv8V));
    bufp->fullBit(oldp+460,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__qMhxEPDIY));
    bufp->fullBit(oldp+461,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__wCAmo0T4));
    bufp->fullBit(oldp+462,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__nzJk0CYt));
    bufp->fullBit(oldp+463,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__KAZaki8Z));
    bufp->fullBit(oldp+464,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__GryHxQYb));
    bufp->fullBit(oldp+465,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__tM5lueYO1));
    bufp->fullBit(oldp+466,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__JxgCKb0r));
    bufp->fullBit(oldp+467,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__rFrUt3HA));
    bufp->fullBit(oldp+468,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__CsytHqHJ));
    bufp->fullBit(oldp+469,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__SVALFln));
    bufp->fullBit(oldp+470,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__yz2lRBz7));
    bufp->fullBit(oldp+471,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__WChG0j8I));
    bufp->fullBit(oldp+472,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__CzgHuUSI));
    bufp->fullBit(oldp+473,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__A66ucgr));
    bufp->fullBit(oldp+474,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__Ljqmq49));
    bufp->fullBit(oldp+475,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__mXoVztmUwG));
    bufp->fullBit(oldp+476,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__dWa2lYZtw5));
    bufp->fullBit(oldp+477,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__pngOwGCJUg));
    bufp->fullBit(oldp+478,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__CTHw1Tw4JF));
    bufp->fullBit(oldp+479,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__iBoxza85A));
    bufp->fullBit(oldp+480,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__sDefmLkP9));
    bufp->fullBit(oldp+481,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__tkNSPBbC4));
    bufp->fullBit(oldp+482,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__vkhuKAwC7));
    bufp->fullBit(oldp+483,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__LYUGKdPgW));
    bufp->fullBit(oldp+484,((0x6bU == vlSelf->top__DOT__inst)));
    bufp->fullBit(oldp+485,((0x5007fU == vlSelf->top__DOT__inst)));
    bufp->fullCData(oldp+486,((vlSelf->top__DOT__inst 
                               >> 0x1aU)),6);
    bufp->fullBit(oldp+487,((1U & (vlSelf->top__DOT__inst 
                                   >> 0x19U))));
    bufp->fullBit(oldp+488,(vlSelf->top__DOT__RV_VECTOR__DOT__u_decode__DOT__inst_vle32_v));
    bufp->fullBit(oldp+489,(vlSelf->top__DOT__RV_VECTOR__DOT__u_decode__DOT__inst_vse32_v));
    bufp->fullBit(oldp+490,(vlSelf->top__DOT__RV_VECTOR__DOT__u_decode__DOT__inst_vadd_vv));
    bufp->fullBit(oldp+491,(vlSelf->top__DOT__RV_VECTOR__DOT__u_decode__DOT__inst_vmul_vv));
    bufp->fullIData(oldp+492,(vlSelf->top__DOT__RV_VECTOR__DOT__u_vregfile__DOT__i),32);
    bufp->fullWData(oldp+493,(vlSelf->top__DOT__RV_VECTOR__DOT__u_vregfile__DOT__vregfile[0]),512);
    bufp->fullWData(oldp+509,(vlSelf->top__DOT__RV_VECTOR__DOT__u_vregfile__DOT__vregfile[1]),512);
    bufp->fullWData(oldp+525,(vlSelf->top__DOT__RV_VECTOR__DOT__u_vregfile__DOT__vregfile[2]),512);
    bufp->fullWData(oldp+541,(vlSelf->top__DOT__RV_VECTOR__DOT__u_vregfile__DOT__vregfile[3]),512);
    bufp->fullWData(oldp+557,(vlSelf->top__DOT__RV_VECTOR__DOT__u_vregfile__DOT__vregfile[4]),512);
    bufp->fullWData(oldp+573,(vlSelf->top__DOT__RV_VECTOR__DOT__u_vregfile__DOT__vregfile[5]),512);
    bufp->fullWData(oldp+589,(vlSelf->top__DOT__RV_VECTOR__DOT__u_vregfile__DOT__vregfile[6]),512);
    bufp->fullWData(oldp+605,(vlSelf->top__DOT__RV_VECTOR__DOT__u_vregfile__DOT__vregfile[7]),512);
    bufp->fullWData(oldp+621,(vlSelf->top__DOT__RV_VECTOR__DOT__u_vregfile__DOT__vregfile[8]),512);
    bufp->fullWData(oldp+637,(vlSelf->top__DOT__RV_VECTOR__DOT__u_vregfile__DOT__vregfile[9]),512);
    bufp->fullWData(oldp+653,(vlSelf->top__DOT__RV_VECTOR__DOT__u_vregfile__DOT__vregfile[10]),512);
    bufp->fullWData(oldp+669,(vlSelf->top__DOT__RV_VECTOR__DOT__u_vregfile__DOT__vregfile[11]),512);
    bufp->fullWData(oldp+685,(vlSelf->top__DOT__RV_VECTOR__DOT__u_vregfile__DOT__vregfile[12]),512);
    bufp->fullWData(oldp+701,(vlSelf->top__DOT__RV_VECTOR__DOT__u_vregfile__DOT__vregfile[13]),512);
    bufp->fullWData(oldp+717,(vlSelf->top__DOT__RV_VECTOR__DOT__u_vregfile__DOT__vregfile[14]),512);
    bufp->fullWData(oldp+733,(vlSelf->top__DOT__RV_VECTOR__DOT__u_vregfile__DOT__vregfile[15]),512);
    bufp->fullWData(oldp+749,(vlSelf->top__DOT__RV_VECTOR__DOT__u_vregfile__DOT__vregfile[16]),512);
    bufp->fullWData(oldp+765,(vlSelf->top__DOT__RV_VECTOR__DOT__u_vregfile__DOT__vregfile[17]),512);
    bufp->fullWData(oldp+781,(vlSelf->top__DOT__RV_VECTOR__DOT__u_vregfile__DOT__vregfile[18]),512);
    bufp->fullWData(oldp+797,(vlSelf->top__DOT__RV_VECTOR__DOT__u_vregfile__DOT__vregfile[19]),512);
    bufp->fullWData(oldp+813,(vlSelf->top__DOT__RV_VECTOR__DOT__u_vregfile__DOT__vregfile[20]),512);
    bufp->fullWData(oldp+829,(vlSelf->top__DOT__RV_VECTOR__DOT__u_vregfile__DOT__vregfile[21]),512);
    bufp->fullWData(oldp+845,(vlSelf->top__DOT__RV_VECTOR__DOT__u_vregfile__DOT__vregfile[22]),512);
    bufp->fullWData(oldp+861,(vlSelf->top__DOT__RV_VECTOR__DOT__u_vregfile__DOT__vregfile[23]),512);
    bufp->fullWData(oldp+877,(vlSelf->top__DOT__RV_VECTOR__DOT__u_vregfile__DOT__vregfile[24]),512);
    bufp->fullWData(oldp+893,(vlSelf->top__DOT__RV_VECTOR__DOT__u_vregfile__DOT__vregfile[25]),512);
    bufp->fullWData(oldp+909,(vlSelf->top__DOT__RV_VECTOR__DOT__u_vregfile__DOT__vregfile[26]),512);
    bufp->fullWData(oldp+925,(vlSelf->top__DOT__RV_VECTOR__DOT__u_vregfile__DOT__vregfile[27]),512);
    bufp->fullWData(oldp+941,(vlSelf->top__DOT__RV_VECTOR__DOT__u_vregfile__DOT__vregfile[28]),512);
    bufp->fullWData(oldp+957,(vlSelf->top__DOT__RV_VECTOR__DOT__u_vregfile__DOT__vregfile[29]),512);
    bufp->fullWData(oldp+973,(vlSelf->top__DOT__RV_VECTOR__DOT__u_vregfile__DOT__vregfile[30]),512);
    bufp->fullWData(oldp+989,(vlSelf->top__DOT__RV_VECTOR__DOT__u_vregfile__DOT__vregfile[31]),512);
    bufp->fullBit(oldp+1005,(vlSelf->clock));
    bufp->fullBit(oldp+1006,(vlSelf->reset));
    bufp->fullBit(oldp+1007,((1U & (~ (IData)(vlSelf->reset)))));
    bufp->fullBit(oldp+1008,(((~ (IData)(vlSelf->reset)) 
                              & (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__u_decode__DOT__inst_vse32_v))));
    if (vlSelf->top__DOT__RV_VECTOR__DOT__u_decode__DOT__inst_vse32_v) {
        if (vlSelf->reset) {
            __Vtemp_h2e8613d8__0[0U] = Vtop__ConstPool__CONST_h93e1b771_0[0U];
            __Vtemp_h2e8613d8__0[1U] = Vtop__ConstPool__CONST_h93e1b771_0[1U];
            __Vtemp_h2e8613d8__0[2U] = Vtop__ConstPool__CONST_h93e1b771_0[2U];
            __Vtemp_h2e8613d8__0[3U] = Vtop__ConstPool__CONST_h93e1b771_0[3U];
            __Vtemp_h2e8613d8__0[4U] = Vtop__ConstPool__CONST_h93e1b771_0[4U];
            __Vtemp_h2e8613d8__0[5U] = Vtop__ConstPool__CONST_h93e1b771_0[5U];
            __Vtemp_h2e8613d8__0[6U] = Vtop__ConstPool__CONST_h93e1b771_0[6U];
            __Vtemp_h2e8613d8__0[7U] = Vtop__ConstPool__CONST_h93e1b771_0[7U];
            __Vtemp_h2e8613d8__0[8U] = Vtop__ConstPool__CONST_h93e1b771_0[8U];
            __Vtemp_h2e8613d8__0[9U] = Vtop__ConstPool__CONST_h93e1b771_0[9U];
            __Vtemp_h2e8613d8__0[0xaU] = Vtop__ConstPool__CONST_h93e1b771_0[0xaU];
            __Vtemp_h2e8613d8__0[0xbU] = Vtop__ConstPool__CONST_h93e1b771_0[0xbU];
            __Vtemp_h2e8613d8__0[0xcU] = Vtop__ConstPool__CONST_h93e1b771_0[0xcU];
            __Vtemp_h2e8613d8__0[0xdU] = Vtop__ConstPool__CONST_h93e1b771_0[0xdU];
            __Vtemp_h2e8613d8__0[0xeU] = Vtop__ConstPool__CONST_h93e1b771_0[0xeU];
            __Vtemp_h2e8613d8__0[0xfU] = Vtop__ConstPool__CONST_h93e1b771_0[0xfU];
        } else if (vlSelf->top__DOT__RV_VECTOR__DOT__vs2_en) {
            __Vtemp_h2e8613d8__0[0U] = vlSelf->top__DOT__RV_VECTOR__DOT__u_vregfile__DOT__vregfile
                [(0x1fU & (((~ (IData)(vlSelf->reset)) 
                            & (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__u_decode__DOT__inst_vse32_v))
                            ? (vlSelf->top__DOT__inst 
                               >> 7U) : ((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_en)
                                          ? (vlSelf->top__DOT__inst 
                                             >> 0x14U)
                                          : 0U)))][0U];
            __Vtemp_h2e8613d8__0[1U] = vlSelf->top__DOT__RV_VECTOR__DOT__u_vregfile__DOT__vregfile
                [(0x1fU & (((~ (IData)(vlSelf->reset)) 
                            & (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__u_decode__DOT__inst_vse32_v))
                            ? (vlSelf->top__DOT__inst 
                               >> 7U) : ((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_en)
                                          ? (vlSelf->top__DOT__inst 
                                             >> 0x14U)
                                          : 0U)))][1U];
            __Vtemp_h2e8613d8__0[2U] = vlSelf->top__DOT__RV_VECTOR__DOT__u_vregfile__DOT__vregfile
                [(0x1fU & (((~ (IData)(vlSelf->reset)) 
                            & (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__u_decode__DOT__inst_vse32_v))
                            ? (vlSelf->top__DOT__inst 
                               >> 7U) : ((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_en)
                                          ? (vlSelf->top__DOT__inst 
                                             >> 0x14U)
                                          : 0U)))][2U];
            __Vtemp_h2e8613d8__0[3U] = vlSelf->top__DOT__RV_VECTOR__DOT__u_vregfile__DOT__vregfile
                [(0x1fU & (((~ (IData)(vlSelf->reset)) 
                            & (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__u_decode__DOT__inst_vse32_v))
                            ? (vlSelf->top__DOT__inst 
                               >> 7U) : ((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_en)
                                          ? (vlSelf->top__DOT__inst 
                                             >> 0x14U)
                                          : 0U)))][3U];
            __Vtemp_h2e8613d8__0[4U] = vlSelf->top__DOT__RV_VECTOR__DOT__u_vregfile__DOT__vregfile
                [(0x1fU & (((~ (IData)(vlSelf->reset)) 
                            & (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__u_decode__DOT__inst_vse32_v))
                            ? (vlSelf->top__DOT__inst 
                               >> 7U) : ((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_en)
                                          ? (vlSelf->top__DOT__inst 
                                             >> 0x14U)
                                          : 0U)))][4U];
            __Vtemp_h2e8613d8__0[5U] = vlSelf->top__DOT__RV_VECTOR__DOT__u_vregfile__DOT__vregfile
                [(0x1fU & (((~ (IData)(vlSelf->reset)) 
                            & (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__u_decode__DOT__inst_vse32_v))
                            ? (vlSelf->top__DOT__inst 
                               >> 7U) : ((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_en)
                                          ? (vlSelf->top__DOT__inst 
                                             >> 0x14U)
                                          : 0U)))][5U];
            __Vtemp_h2e8613d8__0[6U] = vlSelf->top__DOT__RV_VECTOR__DOT__u_vregfile__DOT__vregfile
                [(0x1fU & (((~ (IData)(vlSelf->reset)) 
                            & (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__u_decode__DOT__inst_vse32_v))
                            ? (vlSelf->top__DOT__inst 
                               >> 7U) : ((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_en)
                                          ? (vlSelf->top__DOT__inst 
                                             >> 0x14U)
                                          : 0U)))][6U];
            __Vtemp_h2e8613d8__0[7U] = vlSelf->top__DOT__RV_VECTOR__DOT__u_vregfile__DOT__vregfile
                [(0x1fU & (((~ (IData)(vlSelf->reset)) 
                            & (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__u_decode__DOT__inst_vse32_v))
                            ? (vlSelf->top__DOT__inst 
                               >> 7U) : ((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_en)
                                          ? (vlSelf->top__DOT__inst 
                                             >> 0x14U)
                                          : 0U)))][7U];
            __Vtemp_h2e8613d8__0[8U] = vlSelf->top__DOT__RV_VECTOR__DOT__u_vregfile__DOT__vregfile
                [(0x1fU & (((~ (IData)(vlSelf->reset)) 
                            & (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__u_decode__DOT__inst_vse32_v))
                            ? (vlSelf->top__DOT__inst 
                               >> 7U) : ((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_en)
                                          ? (vlSelf->top__DOT__inst 
                                             >> 0x14U)
                                          : 0U)))][8U];
            __Vtemp_h2e8613d8__0[9U] = vlSelf->top__DOT__RV_VECTOR__DOT__u_vregfile__DOT__vregfile
                [(0x1fU & (((~ (IData)(vlSelf->reset)) 
                            & (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__u_decode__DOT__inst_vse32_v))
                            ? (vlSelf->top__DOT__inst 
                               >> 7U) : ((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_en)
                                          ? (vlSelf->top__DOT__inst 
                                             >> 0x14U)
                                          : 0U)))][9U];
            __Vtemp_h2e8613d8__0[0xaU] = vlSelf->top__DOT__RV_VECTOR__DOT__u_vregfile__DOT__vregfile
                [(0x1fU & (((~ (IData)(vlSelf->reset)) 
                            & (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__u_decode__DOT__inst_vse32_v))
                            ? (vlSelf->top__DOT__inst 
                               >> 7U) : ((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_en)
                                          ? (vlSelf->top__DOT__inst 
                                             >> 0x14U)
                                          : 0U)))][0xaU];
            __Vtemp_h2e8613d8__0[0xbU] = vlSelf->top__DOT__RV_VECTOR__DOT__u_vregfile__DOT__vregfile
                [(0x1fU & (((~ (IData)(vlSelf->reset)) 
                            & (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__u_decode__DOT__inst_vse32_v))
                            ? (vlSelf->top__DOT__inst 
                               >> 7U) : ((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_en)
                                          ? (vlSelf->top__DOT__inst 
                                             >> 0x14U)
                                          : 0U)))][0xbU];
            __Vtemp_h2e8613d8__0[0xcU] = vlSelf->top__DOT__RV_VECTOR__DOT__u_vregfile__DOT__vregfile
                [(0x1fU & (((~ (IData)(vlSelf->reset)) 
                            & (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__u_decode__DOT__inst_vse32_v))
                            ? (vlSelf->top__DOT__inst 
                               >> 7U) : ((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_en)
                                          ? (vlSelf->top__DOT__inst 
                                             >> 0x14U)
                                          : 0U)))][0xcU];
            __Vtemp_h2e8613d8__0[0xdU] = vlSelf->top__DOT__RV_VECTOR__DOT__u_vregfile__DOT__vregfile
                [(0x1fU & (((~ (IData)(vlSelf->reset)) 
                            & (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__u_decode__DOT__inst_vse32_v))
                            ? (vlSelf->top__DOT__inst 
                               >> 7U) : ((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_en)
                                          ? (vlSelf->top__DOT__inst 
                                             >> 0x14U)
                                          : 0U)))][0xdU];
            __Vtemp_h2e8613d8__0[0xeU] = vlSelf->top__DOT__RV_VECTOR__DOT__u_vregfile__DOT__vregfile
                [(0x1fU & (((~ (IData)(vlSelf->reset)) 
                            & (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__u_decode__DOT__inst_vse32_v))
                            ? (vlSelf->top__DOT__inst 
                               >> 7U) : ((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_en)
                                          ? (vlSelf->top__DOT__inst 
                                             >> 0x14U)
                                          : 0U)))][0xeU];
            __Vtemp_h2e8613d8__0[0xfU] = vlSelf->top__DOT__RV_VECTOR__DOT__u_vregfile__DOT__vregfile
                [(0x1fU & (((~ (IData)(vlSelf->reset)) 
                            & (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__u_decode__DOT__inst_vse32_v))
                            ? (vlSelf->top__DOT__inst 
                               >> 7U) : ((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_en)
                                          ? (vlSelf->top__DOT__inst 
                                             >> 0x14U)
                                          : 0U)))][0xfU];
        } else {
            __Vtemp_h2e8613d8__0[0U] = Vtop__ConstPool__CONST_h93e1b771_0[0U];
            __Vtemp_h2e8613d8__0[1U] = Vtop__ConstPool__CONST_h93e1b771_0[1U];
            __Vtemp_h2e8613d8__0[2U] = Vtop__ConstPool__CONST_h93e1b771_0[2U];
            __Vtemp_h2e8613d8__0[3U] = Vtop__ConstPool__CONST_h93e1b771_0[3U];
            __Vtemp_h2e8613d8__0[4U] = Vtop__ConstPool__CONST_h93e1b771_0[4U];
            __Vtemp_h2e8613d8__0[5U] = Vtop__ConstPool__CONST_h93e1b771_0[5U];
            __Vtemp_h2e8613d8__0[6U] = Vtop__ConstPool__CONST_h93e1b771_0[6U];
            __Vtemp_h2e8613d8__0[7U] = Vtop__ConstPool__CONST_h93e1b771_0[7U];
            __Vtemp_h2e8613d8__0[8U] = Vtop__ConstPool__CONST_h93e1b771_0[8U];
            __Vtemp_h2e8613d8__0[9U] = Vtop__ConstPool__CONST_h93e1b771_0[9U];
            __Vtemp_h2e8613d8__0[0xaU] = Vtop__ConstPool__CONST_h93e1b771_0[0xaU];
            __Vtemp_h2e8613d8__0[0xbU] = Vtop__ConstPool__CONST_h93e1b771_0[0xbU];
            __Vtemp_h2e8613d8__0[0xcU] = Vtop__ConstPool__CONST_h93e1b771_0[0xcU];
            __Vtemp_h2e8613d8__0[0xdU] = Vtop__ConstPool__CONST_h93e1b771_0[0xdU];
            __Vtemp_h2e8613d8__0[0xeU] = Vtop__ConstPool__CONST_h93e1b771_0[0xeU];
            __Vtemp_h2e8613d8__0[0xfU] = Vtop__ConstPool__CONST_h93e1b771_0[0xfU];
        }
    } else {
        __Vtemp_h2e8613d8__0[0U] = Vtop__ConstPool__CONST_h93e1b771_0[0U];
        __Vtemp_h2e8613d8__0[1U] = Vtop__ConstPool__CONST_h93e1b771_0[1U];
        __Vtemp_h2e8613d8__0[2U] = Vtop__ConstPool__CONST_h93e1b771_0[2U];
        __Vtemp_h2e8613d8__0[3U] = Vtop__ConstPool__CONST_h93e1b771_0[3U];
        __Vtemp_h2e8613d8__0[4U] = Vtop__ConstPool__CONST_h93e1b771_0[4U];
        __Vtemp_h2e8613d8__0[5U] = Vtop__ConstPool__CONST_h93e1b771_0[5U];
        __Vtemp_h2e8613d8__0[6U] = Vtop__ConstPool__CONST_h93e1b771_0[6U];
        __Vtemp_h2e8613d8__0[7U] = Vtop__ConstPool__CONST_h93e1b771_0[7U];
        __Vtemp_h2e8613d8__0[8U] = Vtop__ConstPool__CONST_h93e1b771_0[8U];
        __Vtemp_h2e8613d8__0[9U] = Vtop__ConstPool__CONST_h93e1b771_0[9U];
        __Vtemp_h2e8613d8__0[0xaU] = Vtop__ConstPool__CONST_h93e1b771_0[0xaU];
        __Vtemp_h2e8613d8__0[0xbU] = Vtop__ConstPool__CONST_h93e1b771_0[0xbU];
        __Vtemp_h2e8613d8__0[0xcU] = Vtop__ConstPool__CONST_h93e1b771_0[0xcU];
        __Vtemp_h2e8613d8__0[0xdU] = Vtop__ConstPool__CONST_h93e1b771_0[0xdU];
        __Vtemp_h2e8613d8__0[0xeU] = Vtop__ConstPool__CONST_h93e1b771_0[0xeU];
        __Vtemp_h2e8613d8__0[0xfU] = Vtop__ConstPool__CONST_h93e1b771_0[0xfU];
    }
    bufp->fullWData(oldp+1009,(__Vtemp_h2e8613d8__0),512);
    if (vlSelf->reset) {
        __Vtemp_haeb98438__0[0U] = Vtop__ConstPool__CONST_h93e1b771_0[0U];
        __Vtemp_haeb98438__0[1U] = Vtop__ConstPool__CONST_h93e1b771_0[1U];
        __Vtemp_haeb98438__0[2U] = Vtop__ConstPool__CONST_h93e1b771_0[2U];
        __Vtemp_haeb98438__0[3U] = Vtop__ConstPool__CONST_h93e1b771_0[3U];
        __Vtemp_haeb98438__0[4U] = Vtop__ConstPool__CONST_h93e1b771_0[4U];
        __Vtemp_haeb98438__0[5U] = Vtop__ConstPool__CONST_h93e1b771_0[5U];
        __Vtemp_haeb98438__0[6U] = Vtop__ConstPool__CONST_h93e1b771_0[6U];
        __Vtemp_haeb98438__0[7U] = Vtop__ConstPool__CONST_h93e1b771_0[7U];
        __Vtemp_haeb98438__0[8U] = Vtop__ConstPool__CONST_h93e1b771_0[8U];
        __Vtemp_haeb98438__0[9U] = Vtop__ConstPool__CONST_h93e1b771_0[9U];
        __Vtemp_haeb98438__0[0xaU] = Vtop__ConstPool__CONST_h93e1b771_0[0xaU];
        __Vtemp_haeb98438__0[0xbU] = Vtop__ConstPool__CONST_h93e1b771_0[0xbU];
        __Vtemp_haeb98438__0[0xcU] = Vtop__ConstPool__CONST_h93e1b771_0[0xcU];
        __Vtemp_haeb98438__0[0xdU] = Vtop__ConstPool__CONST_h93e1b771_0[0xdU];
        __Vtemp_haeb98438__0[0xeU] = Vtop__ConstPool__CONST_h93e1b771_0[0xeU];
        __Vtemp_haeb98438__0[0xfU] = Vtop__ConstPool__CONST_h93e1b771_0[0xfU];
    } else if (vlSelf->top__DOT__RV_VECTOR__DOT__vs1_en) {
        __Vtemp_haeb98438__0[0U] = vlSelf->top__DOT__RV_VECTOR__DOT__u_vregfile__DOT__vregfile
            [((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs1_en)
               ? (0x1fU & (vlSelf->top__DOT__inst >> 0xfU))
               : 0U)][0U];
        __Vtemp_haeb98438__0[1U] = vlSelf->top__DOT__RV_VECTOR__DOT__u_vregfile__DOT__vregfile
            [((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs1_en)
               ? (0x1fU & (vlSelf->top__DOT__inst >> 0xfU))
               : 0U)][1U];
        __Vtemp_haeb98438__0[2U] = vlSelf->top__DOT__RV_VECTOR__DOT__u_vregfile__DOT__vregfile
            [((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs1_en)
               ? (0x1fU & (vlSelf->top__DOT__inst >> 0xfU))
               : 0U)][2U];
        __Vtemp_haeb98438__0[3U] = vlSelf->top__DOT__RV_VECTOR__DOT__u_vregfile__DOT__vregfile
            [((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs1_en)
               ? (0x1fU & (vlSelf->top__DOT__inst >> 0xfU))
               : 0U)][3U];
        __Vtemp_haeb98438__0[4U] = vlSelf->top__DOT__RV_VECTOR__DOT__u_vregfile__DOT__vregfile
            [((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs1_en)
               ? (0x1fU & (vlSelf->top__DOT__inst >> 0xfU))
               : 0U)][4U];
        __Vtemp_haeb98438__0[5U] = vlSelf->top__DOT__RV_VECTOR__DOT__u_vregfile__DOT__vregfile
            [((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs1_en)
               ? (0x1fU & (vlSelf->top__DOT__inst >> 0xfU))
               : 0U)][5U];
        __Vtemp_haeb98438__0[6U] = vlSelf->top__DOT__RV_VECTOR__DOT__u_vregfile__DOT__vregfile
            [((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs1_en)
               ? (0x1fU & (vlSelf->top__DOT__inst >> 0xfU))
               : 0U)][6U];
        __Vtemp_haeb98438__0[7U] = vlSelf->top__DOT__RV_VECTOR__DOT__u_vregfile__DOT__vregfile
            [((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs1_en)
               ? (0x1fU & (vlSelf->top__DOT__inst >> 0xfU))
               : 0U)][7U];
        __Vtemp_haeb98438__0[8U] = vlSelf->top__DOT__RV_VECTOR__DOT__u_vregfile__DOT__vregfile
            [((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs1_en)
               ? (0x1fU & (vlSelf->top__DOT__inst >> 0xfU))
               : 0U)][8U];
        __Vtemp_haeb98438__0[9U] = vlSelf->top__DOT__RV_VECTOR__DOT__u_vregfile__DOT__vregfile
            [((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs1_en)
               ? (0x1fU & (vlSelf->top__DOT__inst >> 0xfU))
               : 0U)][9U];
        __Vtemp_haeb98438__0[0xaU] = vlSelf->top__DOT__RV_VECTOR__DOT__u_vregfile__DOT__vregfile
            [((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs1_en)
               ? (0x1fU & (vlSelf->top__DOT__inst >> 0xfU))
               : 0U)][0xaU];
        __Vtemp_haeb98438__0[0xbU] = vlSelf->top__DOT__RV_VECTOR__DOT__u_vregfile__DOT__vregfile
            [((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs1_en)
               ? (0x1fU & (vlSelf->top__DOT__inst >> 0xfU))
               : 0U)][0xbU];
        __Vtemp_haeb98438__0[0xcU] = vlSelf->top__DOT__RV_VECTOR__DOT__u_vregfile__DOT__vregfile
            [((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs1_en)
               ? (0x1fU & (vlSelf->top__DOT__inst >> 0xfU))
               : 0U)][0xcU];
        __Vtemp_haeb98438__0[0xdU] = vlSelf->top__DOT__RV_VECTOR__DOT__u_vregfile__DOT__vregfile
            [((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs1_en)
               ? (0x1fU & (vlSelf->top__DOT__inst >> 0xfU))
               : 0U)][0xdU];
        __Vtemp_haeb98438__0[0xeU] = vlSelf->top__DOT__RV_VECTOR__DOT__u_vregfile__DOT__vregfile
            [((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs1_en)
               ? (0x1fU & (vlSelf->top__DOT__inst >> 0xfU))
               : 0U)][0xeU];
        __Vtemp_haeb98438__0[0xfU] = vlSelf->top__DOT__RV_VECTOR__DOT__u_vregfile__DOT__vregfile
            [((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs1_en)
               ? (0x1fU & (vlSelf->top__DOT__inst >> 0xfU))
               : 0U)][0xfU];
    } else {
        __Vtemp_haeb98438__0[0U] = Vtop__ConstPool__CONST_h93e1b771_0[0U];
        __Vtemp_haeb98438__0[1U] = Vtop__ConstPool__CONST_h93e1b771_0[1U];
        __Vtemp_haeb98438__0[2U] = Vtop__ConstPool__CONST_h93e1b771_0[2U];
        __Vtemp_haeb98438__0[3U] = Vtop__ConstPool__CONST_h93e1b771_0[3U];
        __Vtemp_haeb98438__0[4U] = Vtop__ConstPool__CONST_h93e1b771_0[4U];
        __Vtemp_haeb98438__0[5U] = Vtop__ConstPool__CONST_h93e1b771_0[5U];
        __Vtemp_haeb98438__0[6U] = Vtop__ConstPool__CONST_h93e1b771_0[6U];
        __Vtemp_haeb98438__0[7U] = Vtop__ConstPool__CONST_h93e1b771_0[7U];
        __Vtemp_haeb98438__0[8U] = Vtop__ConstPool__CONST_h93e1b771_0[8U];
        __Vtemp_haeb98438__0[9U] = Vtop__ConstPool__CONST_h93e1b771_0[9U];
        __Vtemp_haeb98438__0[0xaU] = Vtop__ConstPool__CONST_h93e1b771_0[0xaU];
        __Vtemp_haeb98438__0[0xbU] = Vtop__ConstPool__CONST_h93e1b771_0[0xbU];
        __Vtemp_haeb98438__0[0xcU] = Vtop__ConstPool__CONST_h93e1b771_0[0xcU];
        __Vtemp_haeb98438__0[0xdU] = Vtop__ConstPool__CONST_h93e1b771_0[0xdU];
        __Vtemp_haeb98438__0[0xeU] = Vtop__ConstPool__CONST_h93e1b771_0[0xeU];
        __Vtemp_haeb98438__0[0xfU] = Vtop__ConstPool__CONST_h93e1b771_0[0xfU];
    }
    bufp->fullWData(oldp+1025,(__Vtemp_haeb98438__0),512);
    bufp->fullCData(oldp+1041,((0x1fU & (((~ (IData)(vlSelf->reset)) 
                                          & (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__u_decode__DOT__inst_vse32_v))
                                          ? (vlSelf->top__DOT__inst 
                                             >> 7U)
                                          : ((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_en)
                                              ? (vlSelf->top__DOT__inst 
                                                 >> 0x14U)
                                              : 0U)))),5);
    if (vlSelf->reset) {
        __Vtemp_h93ad85a7__0[0U] = Vtop__ConstPool__CONST_h93e1b771_0[0U];
        __Vtemp_h93ad85a7__0[1U] = Vtop__ConstPool__CONST_h93e1b771_0[1U];
        __Vtemp_h93ad85a7__0[2U] = Vtop__ConstPool__CONST_h93e1b771_0[2U];
        __Vtemp_h93ad85a7__0[3U] = Vtop__ConstPool__CONST_h93e1b771_0[3U];
        __Vtemp_h93ad85a7__0[4U] = Vtop__ConstPool__CONST_h93e1b771_0[4U];
        __Vtemp_h93ad85a7__0[5U] = Vtop__ConstPool__CONST_h93e1b771_0[5U];
        __Vtemp_h93ad85a7__0[6U] = Vtop__ConstPool__CONST_h93e1b771_0[6U];
        __Vtemp_h93ad85a7__0[7U] = Vtop__ConstPool__CONST_h93e1b771_0[7U];
        __Vtemp_h93ad85a7__0[8U] = Vtop__ConstPool__CONST_h93e1b771_0[8U];
        __Vtemp_h93ad85a7__0[9U] = Vtop__ConstPool__CONST_h93e1b771_0[9U];
        __Vtemp_h93ad85a7__0[0xaU] = Vtop__ConstPool__CONST_h93e1b771_0[0xaU];
        __Vtemp_h93ad85a7__0[0xbU] = Vtop__ConstPool__CONST_h93e1b771_0[0xbU];
        __Vtemp_h93ad85a7__0[0xcU] = Vtop__ConstPool__CONST_h93e1b771_0[0xcU];
        __Vtemp_h93ad85a7__0[0xdU] = Vtop__ConstPool__CONST_h93e1b771_0[0xdU];
        __Vtemp_h93ad85a7__0[0xeU] = Vtop__ConstPool__CONST_h93e1b771_0[0xeU];
        __Vtemp_h93ad85a7__0[0xfU] = Vtop__ConstPool__CONST_h93e1b771_0[0xfU];
    } else if (vlSelf->top__DOT__RV_VECTOR__DOT__vs2_en) {
        __Vtemp_h93ad85a7__0[0U] = vlSelf->top__DOT__RV_VECTOR__DOT__u_vregfile__DOT__vregfile
            [(0x1fU & (((~ (IData)(vlSelf->reset)) 
                        & (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__u_decode__DOT__inst_vse32_v))
                        ? (vlSelf->top__DOT__inst >> 7U)
                        : ((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_en)
                            ? (vlSelf->top__DOT__inst 
                               >> 0x14U) : 0U)))][0U];
        __Vtemp_h93ad85a7__0[1U] = vlSelf->top__DOT__RV_VECTOR__DOT__u_vregfile__DOT__vregfile
            [(0x1fU & (((~ (IData)(vlSelf->reset)) 
                        & (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__u_decode__DOT__inst_vse32_v))
                        ? (vlSelf->top__DOT__inst >> 7U)
                        : ((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_en)
                            ? (vlSelf->top__DOT__inst 
                               >> 0x14U) : 0U)))][1U];
        __Vtemp_h93ad85a7__0[2U] = vlSelf->top__DOT__RV_VECTOR__DOT__u_vregfile__DOT__vregfile
            [(0x1fU & (((~ (IData)(vlSelf->reset)) 
                        & (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__u_decode__DOT__inst_vse32_v))
                        ? (vlSelf->top__DOT__inst >> 7U)
                        : ((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_en)
                            ? (vlSelf->top__DOT__inst 
                               >> 0x14U) : 0U)))][2U];
        __Vtemp_h93ad85a7__0[3U] = vlSelf->top__DOT__RV_VECTOR__DOT__u_vregfile__DOT__vregfile
            [(0x1fU & (((~ (IData)(vlSelf->reset)) 
                        & (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__u_decode__DOT__inst_vse32_v))
                        ? (vlSelf->top__DOT__inst >> 7U)
                        : ((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_en)
                            ? (vlSelf->top__DOT__inst 
                               >> 0x14U) : 0U)))][3U];
        __Vtemp_h93ad85a7__0[4U] = vlSelf->top__DOT__RV_VECTOR__DOT__u_vregfile__DOT__vregfile
            [(0x1fU & (((~ (IData)(vlSelf->reset)) 
                        & (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__u_decode__DOT__inst_vse32_v))
                        ? (vlSelf->top__DOT__inst >> 7U)
                        : ((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_en)
                            ? (vlSelf->top__DOT__inst 
                               >> 0x14U) : 0U)))][4U];
        __Vtemp_h93ad85a7__0[5U] = vlSelf->top__DOT__RV_VECTOR__DOT__u_vregfile__DOT__vregfile
            [(0x1fU & (((~ (IData)(vlSelf->reset)) 
                        & (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__u_decode__DOT__inst_vse32_v))
                        ? (vlSelf->top__DOT__inst >> 7U)
                        : ((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_en)
                            ? (vlSelf->top__DOT__inst 
                               >> 0x14U) : 0U)))][5U];
        __Vtemp_h93ad85a7__0[6U] = vlSelf->top__DOT__RV_VECTOR__DOT__u_vregfile__DOT__vregfile
            [(0x1fU & (((~ (IData)(vlSelf->reset)) 
                        & (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__u_decode__DOT__inst_vse32_v))
                        ? (vlSelf->top__DOT__inst >> 7U)
                        : ((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_en)
                            ? (vlSelf->top__DOT__inst 
                               >> 0x14U) : 0U)))][6U];
        __Vtemp_h93ad85a7__0[7U] = vlSelf->top__DOT__RV_VECTOR__DOT__u_vregfile__DOT__vregfile
            [(0x1fU & (((~ (IData)(vlSelf->reset)) 
                        & (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__u_decode__DOT__inst_vse32_v))
                        ? (vlSelf->top__DOT__inst >> 7U)
                        : ((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_en)
                            ? (vlSelf->top__DOT__inst 
                               >> 0x14U) : 0U)))][7U];
        __Vtemp_h93ad85a7__0[8U] = vlSelf->top__DOT__RV_VECTOR__DOT__u_vregfile__DOT__vregfile
            [(0x1fU & (((~ (IData)(vlSelf->reset)) 
                        & (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__u_decode__DOT__inst_vse32_v))
                        ? (vlSelf->top__DOT__inst >> 7U)
                        : ((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_en)
                            ? (vlSelf->top__DOT__inst 
                               >> 0x14U) : 0U)))][8U];
        __Vtemp_h93ad85a7__0[9U] = vlSelf->top__DOT__RV_VECTOR__DOT__u_vregfile__DOT__vregfile
            [(0x1fU & (((~ (IData)(vlSelf->reset)) 
                        & (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__u_decode__DOT__inst_vse32_v))
                        ? (vlSelf->top__DOT__inst >> 7U)
                        : ((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_en)
                            ? (vlSelf->top__DOT__inst 
                               >> 0x14U) : 0U)))][9U];
        __Vtemp_h93ad85a7__0[0xaU] = vlSelf->top__DOT__RV_VECTOR__DOT__u_vregfile__DOT__vregfile
            [(0x1fU & (((~ (IData)(vlSelf->reset)) 
                        & (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__u_decode__DOT__inst_vse32_v))
                        ? (vlSelf->top__DOT__inst >> 7U)
                        : ((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_en)
                            ? (vlSelf->top__DOT__inst 
                               >> 0x14U) : 0U)))][0xaU];
        __Vtemp_h93ad85a7__0[0xbU] = vlSelf->top__DOT__RV_VECTOR__DOT__u_vregfile__DOT__vregfile
            [(0x1fU & (((~ (IData)(vlSelf->reset)) 
                        & (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__u_decode__DOT__inst_vse32_v))
                        ? (vlSelf->top__DOT__inst >> 7U)
                        : ((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_en)
                            ? (vlSelf->top__DOT__inst 
                               >> 0x14U) : 0U)))][0xbU];
        __Vtemp_h93ad85a7__0[0xcU] = vlSelf->top__DOT__RV_VECTOR__DOT__u_vregfile__DOT__vregfile
            [(0x1fU & (((~ (IData)(vlSelf->reset)) 
                        & (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__u_decode__DOT__inst_vse32_v))
                        ? (vlSelf->top__DOT__inst >> 7U)
                        : ((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_en)
                            ? (vlSelf->top__DOT__inst 
                               >> 0x14U) : 0U)))][0xcU];
        __Vtemp_h93ad85a7__0[0xdU] = vlSelf->top__DOT__RV_VECTOR__DOT__u_vregfile__DOT__vregfile
            [(0x1fU & (((~ (IData)(vlSelf->reset)) 
                        & (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__u_decode__DOT__inst_vse32_v))
                        ? (vlSelf->top__DOT__inst >> 7U)
                        : ((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_en)
                            ? (vlSelf->top__DOT__inst 
                               >> 0x14U) : 0U)))][0xdU];
        __Vtemp_h93ad85a7__0[0xeU] = vlSelf->top__DOT__RV_VECTOR__DOT__u_vregfile__DOT__vregfile
            [(0x1fU & (((~ (IData)(vlSelf->reset)) 
                        & (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__u_decode__DOT__inst_vse32_v))
                        ? (vlSelf->top__DOT__inst >> 7U)
                        : ((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_en)
                            ? (vlSelf->top__DOT__inst 
                               >> 0x14U) : 0U)))][0xeU];
        __Vtemp_h93ad85a7__0[0xfU] = vlSelf->top__DOT__RV_VECTOR__DOT__u_vregfile__DOT__vregfile
            [(0x1fU & (((~ (IData)(vlSelf->reset)) 
                        & (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__u_decode__DOT__inst_vse32_v))
                        ? (vlSelf->top__DOT__inst >> 7U)
                        : ((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_en)
                            ? (vlSelf->top__DOT__inst 
                               >> 0x14U) : 0U)))][0xfU];
    } else {
        __Vtemp_h93ad85a7__0[0U] = Vtop__ConstPool__CONST_h93e1b771_0[0U];
        __Vtemp_h93ad85a7__0[1U] = Vtop__ConstPool__CONST_h93e1b771_0[1U];
        __Vtemp_h93ad85a7__0[2U] = Vtop__ConstPool__CONST_h93e1b771_0[2U];
        __Vtemp_h93ad85a7__0[3U] = Vtop__ConstPool__CONST_h93e1b771_0[3U];
        __Vtemp_h93ad85a7__0[4U] = Vtop__ConstPool__CONST_h93e1b771_0[4U];
        __Vtemp_h93ad85a7__0[5U] = Vtop__ConstPool__CONST_h93e1b771_0[5U];
        __Vtemp_h93ad85a7__0[6U] = Vtop__ConstPool__CONST_h93e1b771_0[6U];
        __Vtemp_h93ad85a7__0[7U] = Vtop__ConstPool__CONST_h93e1b771_0[7U];
        __Vtemp_h93ad85a7__0[8U] = Vtop__ConstPool__CONST_h93e1b771_0[8U];
        __Vtemp_h93ad85a7__0[9U] = Vtop__ConstPool__CONST_h93e1b771_0[9U];
        __Vtemp_h93ad85a7__0[0xaU] = Vtop__ConstPool__CONST_h93e1b771_0[0xaU];
        __Vtemp_h93ad85a7__0[0xbU] = Vtop__ConstPool__CONST_h93e1b771_0[0xbU];
        __Vtemp_h93ad85a7__0[0xcU] = Vtop__ConstPool__CONST_h93e1b771_0[0xcU];
        __Vtemp_h93ad85a7__0[0xdU] = Vtop__ConstPool__CONST_h93e1b771_0[0xdU];
        __Vtemp_h93ad85a7__0[0xeU] = Vtop__ConstPool__CONST_h93e1b771_0[0xeU];
        __Vtemp_h93ad85a7__0[0xfU] = Vtop__ConstPool__CONST_h93e1b771_0[0xfU];
    }
    bufp->fullWData(oldp+1042,(__Vtemp_h93ad85a7__0),512);
    bufp->fullBit(oldp+1058,(vlSelf->top__DOT__ren_inst));
    bufp->fullQData(oldp+1059,(vlSelf->top__DOT__raddr_inst),64);
    bufp->fullQData(oldp+1061,(vlSelf->top__DOT__rdata_inst),64);
    bufp->fullBit(oldp+1063,(vlSelf->top__DOT__pc_stall));
    bufp->fullWData(oldp+1064,(Vtop__ConstPool__CONST_h8b2d9f06_0),512);
    bufp->fullBit(oldp+1080,(1U));
    bufp->fullQData(oldp+1081,(0xffffffffffffffffULL),64);
    bufp->fullBit(oldp+1083,(0U));
}
