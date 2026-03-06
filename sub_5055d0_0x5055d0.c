// 函数名称: sub_5055d0
// 虚拟地址: 0x5055d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __convention("regparm")sub_5055d0(void* arg1, int32_t arg2, void* arg3, int32_t* arg4, int32_t arg5, float arg6, int32_t arg7)
{
    // 第一条实际指令: if (*(arg1 + 1) != 0)
    if (*(arg1 + 1) != 0)
        return 
    
    float eax
    
    if (*(arg1 + 3) != 0 || *(arg1 + 4) != 0)
        eax = 4.20389539e-45f
    else
        arg1.b = *(arg3 + 1)
        
        if (arg1.b == 0)
            eax = 0f
        else if (*(arg3 + 3) != 0 && *(arg3 + 4) != 0)
            eax = 2.80259693e-45f
        else if (arg1.b == 0 || *(arg3 + 3) != 0)
            eax = 0f
        else
            eax = 1.40129846e-45f
    
    int32_t var_8_1 = arg7
    int32_t var_c_1 = arg7
    int80_t st0_1
    st0_1, arg1 = sub_4f6100(arg4, arg2, eax, fconvert.s(fconvert.t(arg6)))
}
