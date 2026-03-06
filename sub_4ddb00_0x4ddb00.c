// 函数名称: sub_4ddb00
// 虚拟地址: 0x4ddb00
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

float* __convention("regparm")sub_4ddb00(int32_t arg1, float* arg2)
{
    // 第一条实际指令: int32_t esi = arg1
    int32_t esi = arg1
    
    if (data_3078599 == 0)
        sub_4c5870("gDraw3DData.submittingRenderItems", &data_83f3d3, "Draw3d.cpp", 0x34a, 
            "Draw3DDirectionalLight")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t edi = esi * 3
    long double x87_r7 = fconvert.t(*((edi << 2) + &data_27e850c))
    float* entry_ebx
    long double x87_r6 = fconvert.t(*entry_ebx)
    x87_r6 - x87_r7
    arg1.w = (x87_r6 < x87_r7 ? 1 : 0) << 8 | (is_unordered.t(x87_r6, x87_r7) ? 1 : 0) << 0xa
        | (x87_r6 == x87_r7 ? 1 : 0) << 0xe
    bool p = unimplemented  {test ah, 0x44}
    float* result
    
    if (p)
    label_4ddb96:
        *((edi << 2) + &data_27e850c) = *entry_ebx
        result = arg2
        *((edi << 2) + &data_27e8510) = entry_ebx[1]
        *((edi << 2) + &data_27e8514) = entry_ebx[2]
        *((esi << 4) + &data_27e84cc) = *result
        *((esi << 4) + 0x27e84d0) = result[1]
        *((esi << 4) + 0x27e84d4) = result[2]
        *((esi << 4) + 0x27e84d8) = result[3]
    else
        long double x87_r7_1 = fconvert.t(*((edi << 2) + &data_27e8510))
        long double x87_r6_1 = fconvert.t(entry_ebx[1])
        x87_r6_1 - x87_r7_1
        arg1.w = (x87_r6_1 < x87_r7_1 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_1, x87_r7_1) ? 1 : 0) << 0xa
            | (x87_r6_1 == x87_r7_1 ? 1 : 0) << 0xe
        bool p_1 = unimplemented  {test ah, 0x44}
        
        if (p_1)
            goto label_4ddb96
        
        long double x87_r7_2 = fconvert.t(*((edi << 2) + &data_27e8514))
        long double x87_r6_2 = fconvert.t(entry_ebx[2])
        x87_r6_2 - x87_r7_2
        arg1.w = (x87_r6_2 < x87_r7_2 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_2, x87_r7_2) ? 1 : 0) << 0xa
            | (x87_r6_2 == x87_r7_2 ? 1 : 0) << 0xe
        bool p_2 = unimplemented  {test ah, 0x44}
        
        if (p_2)
            goto label_4ddb96
        
        result = sub_4e3b60(arg2, (esi << 4) + &data_27e84cc)
        
        if (result.b != 0)
            goto label_4ddb96
    
    return result
}
