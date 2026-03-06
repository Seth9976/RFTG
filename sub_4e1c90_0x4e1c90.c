// 函数名称: sub_4e1c90
// 虚拟地址: 0x4e1c90
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_4e1c90()
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    
    if (data_3078599 != 0)
        sub_4c5870("!gDraw3DData.submittingRenderItems", &data_83f3d3, "Draw3d.cpp", 0xa64, 
            "Draw3DRenderItemSubmissionBegin")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    if (data_2de8568 != 0)
        sub_4c5870("gDraw3DData.renderItemCount == 0", &data_83f3d3, "Draw3d.cpp", 0xa65, 
            "Draw3DRenderItemSubmissionBegin")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    if (data_306856c != 0)
        sub_4c5870("gDraw3DData.renderQuadCount == 0", &data_83f3d3, "Draw3d.cpp", 0xa66, 
            "Draw3DRenderItemSubmissionBegin")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    if (data_3078598 != 0)
        sub_4c5870("!gDraw3DData.quadGroupDrawing", &data_83f3d3, "Draw3d.cpp", 0xa67, 
            "Draw3DRenderItemSubmissionBegin")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    long double x87_r7 = float.t(0)
    float var_2c = fconvert.s(x87_r7)
    float var_28 = fconvert.s(x87_r7)
    float edi = var_2c
    float var_24 = fconvert.s(x87_r7)
    float var_20 = fconvert.s(x87_r7)
    data_27e84c8 = fconvert.s(x87_r7)
    data_27e84a8 = edi
    long double x87_r7_1 = float.t(1)
    data_27e84ac = var_28
    long double x87_r5 = float.t(0)
    data_27e84b0 = var_24
    data_27e8498 = 0x3f800000
    data_27e849c = 0x3f800000
    data_27e84a0 = 0x3f800000
    data_27e84b8 = 0x3f800000
    float var_1c = fconvert.s(x87_r7_1 - x87_r5)
    data_27e84bc = 0x3f800000
    data_27e84c0 = 0x3f800000
    data_27e84a4 = 0x3f800000
    data_27e84b4 = var_20
    data_27e84c4 = 0x3f800000
    float var_18 = fconvert.s(x87_r5 - x87_r7_1)
    data_3078599 = 1
    data_27e8494 = 0
    float var_14 = fconvert.s(x87_r5 - x87_r5)
    var_2c = fconvert.s(fconvert.t(var_1c) - x87_r5)
    var_1c = var_2c
    float var_18_1 = fconvert.s(fconvert.t(var_18) - x87_r5)
    float var_14_1 = fconvert.s(fconvert.t(var_14) - x87_r7_1)
    float* eax_7 = sub_4131a0(&var_1c, &var_2c)
    data_27e8324 = *eax_7
    data_27e8328 = eax_7[1]
    data_27e832c = eax_7[2]
    data_27e8354 = 0x3f800000
    data_27e8358 = 0x3f800000
    data_27e835c = 0x3f800000
    data_27e8360 = 0x3f800000
    __builtin_memset(&data_27e8540, 0, 0x1c)
    data_27e8564 = fconvert.s(float.t(1))
    data_27e855c = 0
    data_27e853c = 0
    data_27e8560 = 7
    data_30785c0 = 0
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return 0
}
