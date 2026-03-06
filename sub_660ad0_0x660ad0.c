// 函数名称: sub_660ad0
// 虚拟地址: 0x660ad0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_660ad0(int32_t* arg1)
{
    // 第一条实际指令: int32_t* eax = arg1[0xf]
    int32_t* eax = arg1[0xf]
    int32_t* ecx = *eax
    uint32_t edx = eax[1]
    int32_t* var_1c = 0xffffffff
    int32_t var_18 = 0xffffffff
    int32_t eax_1 = arg1[0x72]
    int32_t var_8 = eax_1
    int32_t eax_3
    int32_t edx_1
    eax_3, edx_1 = sub_65ec50(arg1, arg1[0x12])
    int32_t eax_4 = arg1[0xb1]
    
    if (eax_4 == 0 || arg1[0xb3] == 0)
        arg1[4] = 0xffffffff
        arg1[5] = 0xffffffff
        arg1[2] = 0xffffffff
        arg1[3] = 0xffffffff
    else
        eax_4(*arg1, 0, 0, 2)
        int32_t eax_7
        int32_t edx_3
        edx_3:eax_7 = sx.q(arg1[0xb3](*arg1))
        arg1[4] = eax_7
        arg1[2] = eax_7
        arg1[5] = edx_3
        arg1[3] = edx_3
    
    if ((arg1[4] & arg1[5]) == 0xffffffff)
        return 0xffffff7d
    
    void* eax_9 = arg1[0x10]
    int32_t result
    int32_t edx_5
    result, edx_5 = sub_65e740(arg1, eax_9 + 8, *(eax_9 + 4), &var_8, &var_1c)
    
    if (edx_5 s<= 0 && (edx_5 s< 0 || result u< 0))
        return result
    
    void* eax_11 = arg1[0x10]
    int32_t var_2c_2 = 0
    int32_t var_30_1 = *(eax_11 + 4)
    void* var_34_1 = eax_11 + 8
    
    if (sub_65ee00(arg1, 0, 0, ecx, edx, arg1[2], arg1[3], var_1c, var_18, var_8) s< 0)
        return 0xffffff80
    
    int32_t* eax_17 = arg1[0xe]
    *eax_17 = 0
    eax_17[1] = 0
    *arg1[0x10] = eax_1
    int32_t* eax_19 = arg1[0xf]
    *eax_19 = ecx
    eax_19[1] = edx
    int32_t* eax_20 = arg1[0x11]
    *eax_20 = eax_3
    eax_20[1] = edx_1
    void* eax_21 = arg1[0x11]
    int32_t temp1_1 = *(eax_21 + 8)
    *(eax_21 + 8) -= eax_3
    *(eax_21 + 0xc) = sbb.d(*(eax_21 + 0xc), edx_1, temp1_1 u< eax_3)
    void* eax_22 = arg1[0x11]
    int32_t temp2_1 = *(eax_22 + 0xc)
    
    if (temp2_1 s<= 0 && (temp2_1 s< 0 || *(eax_22 + 8) u< 0))
        *(eax_22 + 8) = 0
        *(eax_22 + 0xc) = 0
    
    return sub_65f8a0(arg1, ecx, edx)
}
