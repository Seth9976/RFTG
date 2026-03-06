// 函数名称: sub_60d600
// 虚拟地址: 0x60d600
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_60d600(int32_t* arg1, int32_t* arg2, int32_t arg3, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: void* esi = arg1[0x4d]
    void* esi = arg1[0x4d]
    int32_t* eax_1 = *(esi + 8)
    int32_t eax_3
    int32_t edx
    eax_3, edx = (*(*eax_1 + 0x48))(eax_1, 0, 0, 0, &arg1)
    
    if (eax_3 s< 0)
        char const* const var_48_1 = "GetBackBuffer()"
        sub_60c740(eax_3, edx)
        return 0xffffffff
    
    int32_t* eax_4 = arg1
    int32_t edi
    int32_t var_48_2 = edi
    int32_t var_40
    int32_t eax_6 = (*(*eax_4 + 0x30))(eax_4, &var_40)
    
    if (eax_6 s< 0)
        int32_t* eax_7 = arg1
        char const* const var_4c_1 = "GetDesc()"
        sub_60c740(eax_6, (*(*eax_7 + 8))(eax_7))
        return 0xffffffff
    
    int32_t* eax_9 = *(esi + 8)
    int32_t var_28
    int32_t var_24
    int32_t* var_8
    int32_t eax_11 = (*(*eax_9 + 0x90))(eax_9, var_28, var_24, var_40, 2, &var_8, 0)
    
    if (eax_11 s< 0)
        int32_t* eax_12 = arg1
        char const* const var_4c_3 = "CreateOffscreenPlainSurface()"
        sub_60c740(eax_11, (*(*eax_12 + 8))(eax_12))
        return 0xffffffff
    
    int32_t* esi_1 = *(esi + 8)
    int32_t eax_16 = (*(*esi_1 + 0x80))(esi_1, arg1, var_8)
    
    if (eax_16 s< 0)
        int32_t* eax_17 = var_8
        (*(*eax_17 + 8))(eax_17)
        int32_t* eax_18 = arg1
        char const* const var_4c_6 = "GetRenderTargetData()"
        sub_60c740(eax_16, (*(*eax_18 + 8))(eax_18))
        return 0xffffffff
    
    int32_t eax_20 = *arg2
    int32_t edx_12 = arg2[3]
    int32_t ecx_9 = arg2[2] + eax_20
    int32_t var_20 = eax_20
    int32_t eax_21 = arg2[1]
    int32_t var_14 = edx_12 + eax_21
    int32_t var_1c = eax_21
    int32_t* eax_22 = var_8
    int32_t var_18 = ecx_9
    int32_t var_10
    int32_t eax_24 = (*(*eax_22 + 0x34))(eax_22, &var_10, &var_20, 0x10)
    
    if (eax_24 s< 0)
        int32_t* eax_25 = var_8
        (*(*eax_25 + 8))(eax_25)
        int32_t* eax_26 = arg1
        char const* const var_4c_9 = "LockRect()"
        sub_60c740(eax_24, (*(*eax_26 + 8))(eax_26))
        return 0xffffffff
    
    int32_t eax_29 = var_10
    int32_t eax_31 = sub_60cab0(var_40)
    int32_t var_c
    sub_5d6450(arg2[2], arg2[3], eax_31, var_c, eax_29, arg3, arg4, arg5)
    int32_t* eax_33 = var_8
    (*(*eax_33 + 0x38))(eax_33)
    int32_t* eax_34 = var_8
    (*(*eax_34 + 8))(eax_34)
    int32_t* eax_35 = arg1
    (*(*eax_35 + 8))(eax_35)
    return 0
}
