// 函数名称: sub_5a5b10
// 虚拟地址: 0x5a5b10
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5a5b10(int32_t* arg1 @ edi, int32_t arg2, int32_t arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t eax = sub_5a5960(arg1)
    int32_t eax = sub_5a5960(arg1)
    int32_t edx = arg1[0x10]
    int32_t ecx_1 = zx.d(data_8bc0f0) * edx
    int32_t esi_2 = arg1[1] * ecx_1
    int32_t eax_2 = arg1[5] * ecx_1
    int32_t* entry_ebx
    
    if (edx s< 0 || edx s> 0x40 || arg1[0x14] u>= 6 || arg1[0x15] u>= 6 || edx s<= 0xffffffff
            || entry_ebx == 0 || arg4 u< eax)
        return 0
    
    sub_5abfc0(entry_ebx, 0, arg4)
    float var_14_1 = fconvert.s(fconvert.t(arg1[0xe]))
    arg1[4] = arg3
    *arg1 = arg2
    arg1[0x13] = 0
    arg1[0x18] = 0
    int32_t ecx_3 = arg1[0x14]
    arg1[3] = esi_2
    arg1[7] = eax_2
    arg1[0x11] = 0xffffffff
    arg1[0x12] = 3
    arg1[0x16] = 1
    arg1[0x17] = 1
    int32_t eax_5
    int32_t edx_2
    eax_5, edx_2 = sub_5a13a0(1, eax_2, ecx_3, var_14_1)
    int32_t ecx_4 = arg1[0x15]
    float var_14_2 = fconvert.s(fconvert.t(arg1[0xf]))
    arg1[0x20] = eax_5
    int32_t eax_6
    int32_t edx_3
    eax_6, edx_3 = sub_5a13a0(eax_5.w, edx_2, ecx_4, var_14_2)
    int32_t ecx_5 = arg1[0x14]
    float var_14_3 = fconvert.s(fconvert.t(arg1[0xe]))
    arg1[0x21] = eax_6
    int32_t eax_7
    int32_t edx_4
    eax_7, edx_4 = sub_5a1300(eax_6.w, edx_3, ecx_5, var_14_3)
    int32_t ecx_6 = arg1[0x15]
    float var_14_4 = fconvert.s(fconvert.t(arg1[0xf]))
    arg1[0x22] = eax_7
    int32_t eax_8 = sub_5a1300(eax_7.w, edx_4, ecx_6, var_14_4)
    arg1[0x14]
    float var_14_5 = fconvert.s(fconvert.t(arg1[0xe]))
    arg1[0x23] = eax_8
    int32_t eax_9 = sub_5a1380(var_14_5)
    arg1[0x15]
    float var_14_6 = fconvert.s(fconvert.t(arg1[0xf]))
    arg1[0x24] = eax_9
    int32_t eax_10 = sub_5a1380(var_14_6)
    int32_t esi_3 = arg1[5]
    float.t(1) - fconvert.t(arg1[0xf])
    int32_t ecx_9 = arg1[0x24]
    arg1[0x25] = eax_10
    arg1[0x28] = arg1[0x10] * esi_3 * 4
    int32_t edx_5 = arg1[1] + (ecx_9 << 1)
    void* ecx_11 = arg1[0x2e] + entry_ebx
    void* eax_17 = arg1[0x2f] + ecx_11
    arg1[0x1b] = eax_17
    void* eax_18 = eax_17 + arg1[0x30]
    arg1[0x1d] = edx_5
    void* edx_7 = arg1[0x31] + eax_18
    arg1[0x1c] = eax_18
    bool p = unimplemented  {test ah, 0x5}
    void* eax_19 = arg1[0x32]
    arg1[0x19] = entry_ebx
    arg1[0x1a] = ecx_11
    arg1[0x1e] = edx_7
    
    if (p)
        int32_t eax_21 = eax_19 + edx_7
        int32_t edx_11 = arg1[0x33] + eax_21
        arg1[0x1f] = eax_21
        arg1[0x2c] = edx_11
        arg1[0x2d] = 0
    else
        void* eax_20 = eax_19 + edx_7
        void* edx_9 = arg1[0x34] + eax_20
        arg1[0x1f] = 0
        arg1[0x2c] = eax_20
        arg1[0x2d] = edx_9
    
    int32_t eax_22 = arg1[1]
    int32_t var_14_7 = esi_3
    float esi_4 = arg1[0x14]
    float var_1c_1 = fconvert.s(fconvert.t(arg1[0xc]))
    arg1[0x2b] = 0xffffffff
    sub_5a1cb0(esi_4, entry_ebx, ecx_11, fconvert.s(fconvert.t(arg1[0xe])), var_1c_1, eax_22)
    int32_t var_14_8 = arg1[6]
    sub_5a1cb0(arg1[0x15], arg1[0x1b], arg1[0x1c], fconvert.s(fconvert.t(arg1[0xf])), 
        fconvert.s(fconvert.t(arg1[0xd])), arg1[2])
    float.t(1) - fconvert.t(arg1[0xf])
    bool p_1 = unimplemented  {test ah, 0x5}
    long double x87_r4
    
    if (p_1)
        sub_5a5780(arg1, x87_r4)
        return 1
    
    sub_5a5400(arg1, x87_r4)
    return 1
}
