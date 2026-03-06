// 函数名称: sub_608310
// 虚拟地址: 0x608310
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_608310(void* arg1, int32_t* arg2, int32_t* arg3, float* arg4)
{
    // 第一条实际指令: int32_t* eax = sub_607d00(arg1)
    int32_t* eax = sub_607d00(arg1)
    int32_t* ecx = arg2[0x11]
    
    if (eax == 0)
        return 0xffffffff
    
    int32_t eax_3 = *(arg1 + 0xd4)
    int32_t var_18
    int32_t eax_5
    float* esi
    
    if (eax_3 != 0 || *(arg1 + 0xd8) != eax_3)
        esi = arg4
        int32_t eax_6 = sub_685f40(float.t(eax_3) + fconvert.t(*esi))
        long double x87_r7_4 = float.t(*(arg1 + 0xd8))
        var_18 = eax_6
        eax_5 = sub_685f40(x87_r7_4 + fconvert.t(esi[1]))
    else
        esi = arg4
        int32_t eax_4 = sub_685f40(fconvert.t(*esi))
        long double x87_r7_1 = fconvert.t(esi[1])
        var_18 = eax_4
        eax_5 = sub_685f40(x87_r7_1)
    
    int32_t var_14 = eax_5
    int32_t eax_7 = sub_685f40(fconvert.t(esi[2]))
    int32_t var_10 = eax_7
    int32_t eax_8 = sub_685f40(fconvert.t(esi[3]))
    int32_t var_c = eax_8
    
    if (arg3[2] == eax_7 && arg3[3] == eax_8)
        return sub_5d6060(ecx, arg3, eax, &var_18)
    
    return sub_5d69a0(ecx, arg3, eax, &var_18)
}
