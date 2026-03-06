// 函数名称: sub_465210
// 虚拟地址: 0x465210
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_465210(void* arg1, int32_t* arg2 @ edi)
{
    // 第一条实际指令: void* ecx_1 = arg1 - arg2
    void* ecx_1 = arg1 - arg2
    int32_t i = ecx_1 s/ 0x14
    
    if (i s> 1)
        int32_t* esi_1 = arg1 - 0x14
        
        do
            int32_t var_14_1 = esi_1[1]
            int32_t eax_4 = esi_1[3]
            int32_t var_18 = *esi_1
            int32_t var_c_1 = eax_4
            int32_t var_10_1 = esi_1[2]
            int32_t edx_4 = esi_1[4]
            *esi_1 = *arg2
            int32_t var_8_1 = edx_4
            esi_1[1] = arg2[1]
            esi_1[2] = arg2[2]
            esi_1[3] = arg2[3]
            esi_1[4] = arg2[4]
            int32_t ebx
            int32_t var_20_1 = ebx
            int32_t* var_24_1 = &var_18
            int32_t eax_8
            int32_t edx_7
            edx_7:eax_8 = muls.dp.d(0x66666667, ecx_1 - 0x14)
            sub_465640(0, edx_7 s>> 3, ecx_1 - 0x14, arg2, (ecx_1 - 0x14) s/ 0x14)
            esi_1 -= 0x14
            ecx_1 = esi_1 - arg2 + 0x14
            i = ecx_1 s/ 0x14
        while (i s> 1)
    
    return i
}
