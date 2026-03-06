// 函数名称: sub_5bcbe0
// 虚拟地址: 0x5bcbe0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t* __convention("regparm")sub_5bcbe0(char* arg1, int32_t arg2, int32_t arg3, char arg4, int32_t* arg5)
{
    // 第一条实际指令: int32_t eax
    int32_t eax
    int32_t edx
    eax, edx = sub_5c0ec0(arg1)
    
    if (edx u<= 0 && (edx u< 0 || eax u< 0x16))
        zip_error_set(arg5, 0x15, 0)
        return 0
    
    int32_t eax_3
    int32_t edx_1
    eax_3, edx_1 = sub_5c0fd0(arg1)
    sub_5c0c80(arg1, 8, 0)
    int32_t eax_6
    int32_t edx_2
    edx_2:eax_6 = sx.q(zx.d(sub_5c0cd0(arg1)))
    int32_t eax_9
    int32_t edx_3
    edx_3:eax_9 = sx.q(zx.d(sub_5c0cd0(arg1)))
    
    if (eax_9 != eax_6 || edx_3 != edx_2)
        zip_error_set(arg5, 0x13, 0)
        return 0
    
    uint32_t eax_11 = sub_5c0d30(arg1)
    uint32_t eax_12 = sub_5c0d30(arg1)
    uint32_t ecx_2 = eax_12 + eax_11
    int32_t eax_13 = adc.d(0, 0, eax_12 + eax_11 u< eax_12)
    
    if (eax_13 u<= 0 && (eax_13 u< 0 || ecx_2 u< eax_12))
        zip_error_set(arg5, 4, 0x1b)
        return 0
    
    int32_t edi_1 = eax_3 + arg2
    int32_t ebx_1 = adc.d(edx_1, arg3, eax_3 + arg2 u< eax_3)
    
    if (eax_13 u>= ebx_1 && (eax_13 u> ebx_1 || ecx_2 u> edi_1))
        zip_error_set(arg5, 0x15, 0)
        return 0
    
    if ((arg4 & 4) == 0 || (ecx_2 == edi_1 && eax_13 == ebx_1))
        int32_t* result = sub_5bf6a0(eax_9, edx_3, arg5)
        
        if (result != 0)
            result[7] = 0
            result[9] = 0
            result[6] = eax_11
            result[8] = eax_12
            return result
    else
        zip_error_set(arg5, 0x15, 0)
    
    return 0
}
