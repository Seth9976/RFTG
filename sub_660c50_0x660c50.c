// 函数名称: sub_660c50
// 虚拟地址: 0x660c50
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int128_t* __convention("regparm")sub_660c50(int32_t arg1, int128_t* arg2 @ esi, int128_t* arg3, void* arg4, int32_t arg5, int32_t arg6, int32_t arg7, int32_t arg8)
{
    // 第一条实际指令: int32_t ebx = arg6
    int32_t ebx = arg6
    int32_t var_8
    
    if (arg1 == 0 || ebx == 0)
        var_8 = 0xffffffff
    else
        int32_t eax = ebx(arg1, 0, 0, 1)
        ebx = arg6
        var_8 = eax
    
    int128_t* var_c = nullptr
    int32_t var_10 = 0
    sub_5abfc0(arg2, 0, 0x2d0)
    int32_t edx = arg8
    arg2[0x2c].d = arg5
    *arg2 = arg1
    *(arg2 + 0x2c4) = ebx
    *(arg2 + 0x2c8) = arg7
    *(arg2 + 0x2cc) = edx
    int32_t eax_2
    int32_t ecx_1
    eax_2, ecx_1 = sub_645cc0(arg2 + 0x18)
    
    if (arg3 != 0)
        sub_5ab990(sub_645d30(arg2 + 0x18, arg4), arg3, arg4)
        eax_2, ecx_1, edx = sub_645dc0(arg2 + 0x18, arg4)
    
    if (var_8 != 0xffffffff)
        *(arg2 + 4) = 1
    
    *(arg2 + 0x34) = 1
    int32_t eax_4
    int32_t ecx_3
    int32_t edx_1
    eax_4, ecx_3, edx_1 = _calloc(eax_2, edx, ecx_1, 1, 0x20)
    *(arg2 + 0x48) = eax_4
    *(arg2 + 0x4c) = _calloc(eax_4, edx_1, ecx_3, 1, 0x10)
    int32_t* ecx_4 = sub_646480(arg2 + 0x78, 0xffffffff)
    int32_t* edx_3 = *(arg2 + 0x4c)
    int32_t* var_34_2 = &var_10
    int32_t* var_38 = &var_c
    int128_t* result
    int32_t edx_4
    result, edx_4 = sub_65e940(nullptr, edx_3, ecx_4, arg2, *(arg2 + 0x48), edx_3)
    int128_t* ebx_2 = var_c
    
    if (result s>= 0)
        int32_t edi_3 = var_10
        int32_t* eax_7 = _calloc(result, edx_4, edi_3 + 2, edi_3 + 2, 4)
        int32_t ecx_6 = *(arg2 + 0x1c8)
        arg2[4].d = eax_7
        *(arg2 + 0x5c) = ecx_6
        *eax_7 = ecx_6
        *(arg2[4].d + 4) = edi_3
        int128_t* eax_9
        int32_t ecx_9
        int32_t edx_6
        eax_9, ecx_9, edx_6 = sub_5ab990(arg2[4].d + 8, ebx_2, edi_3 << 2)
        int32_t* eax_10
        int32_t ecx_10
        int32_t edx_7
        eax_10, ecx_10, edx_7 = _calloc(eax_9, edx_6, ecx_9, 1, 8)
        *(arg2 + 0x38) = eax_10
        *(arg2 + 0x3c) = _calloc(eax_10, edx_7, ecx_10, 1, 8)
        *eax_10 = 0
        eax_10[1] = 0
        int32_t* eax_12 = *(arg2 + 0x3c)
        *eax_12 = *(arg2 + 8)
        eax_12[1] = *(arg2 + 0xc)
        *(arg2 + 0x58) = 1
    else
        *arg2 = 0
        sub_65f700(arg2)
    
    if (ebx_2 != 0)
        __free_base(ebx_2)
    
    return result
}
