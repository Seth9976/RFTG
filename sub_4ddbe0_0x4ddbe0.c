// 函数名称: sub_4ddbe0
// 虚拟地址: 0x4ddbe0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

float*sub_4ddbe0(int32_t* arg1)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    data_27e8024 = *arg1
    data_27e8028 = arg1[1]
    data_27e802c = arg1[2]
    data_27e8030 = arg1[3]
    data_27e8034 = arg1[4]
    data_27e8038 = arg1[5]
    float* result = sub_4e4af0(&data_27e8024)
    bool cond:0 = data_3078808 != 1
    float var_90[0x10]
    __builtin_memcpy(&var_90, result, 0x40)
    
    if (not(cond:0) && data_27e8404 != 0)
        float var_50[0x5]
        __builtin_memcpy(&var_50, 0x83faf8, 0x40)
        float var_3c_1 = fconvert.s(fconvert.t(-1f))
        float var_d0[0x10]
        result = &var_d0
        sub_406020(result, &var_50, &var_90)
        __builtin_memcpy(&var_90, &var_d0, 0x40)
    
    if (data_3078599 == 0)
        __builtin_memcpy(0x27e81ec, &var_90, 0x40)
        sub_5a6aba(eax_1 ^ &__saved_ebp)
        return result
    
    sub_4c5870("!gDraw3DData.submittingRenderItems", &data_83f3d3, "Draw3d.cpp", 0x365, "Draw3DSetProj")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
