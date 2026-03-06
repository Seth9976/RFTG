// 函数名称: sub_464ab0
// 虚拟地址: 0x464ab0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t* __convention("regparm")sub_464ab0(int32_t arg1, int32_t arg2, int32_t* arg3, int32_t* arg4 @ esi, int32_t* arg5)
{
    // 第一条实际指令: int32_t eax_2 = (arg5 - arg3) s>> 2
    int32_t eax_2 = (arg5 - arg3) s>> 2
    int32_t* result
    
    if (eax_2 s<= 0x28)
        int32_t eax_8 = *arg4
        int32_t edx_10 = *arg3
        
        if (eax_8 s< edx_10)
            *arg4 = edx_10
            *arg3 = eax_8
        
        int32_t eax_9 = *arg5
        int32_t edx_11 = *arg4
        
        if (eax_9 s< edx_11)
            *arg5 = edx_11
            *arg4 = eax_9
        
        result = *arg4
        int32_t edx_12 = *arg3
        
        if (result s< edx_12)
            *arg4 = edx_12
            *arg3 = result
    else
        int32_t edi_1 = *arg3
        int32_t eax_4
        int32_t edx
        edx:eax_4 = sx.q(eax_2 + 1)
        int32_t eax_6 = (eax_4 + (edx & 7)) s>> 3
        result = eax_6 * 4
        int32_t edx_2 = *(result + arg3)
        
        if (edx_2 s< edi_1)
            *(result + arg3) = edi_1
            *arg3 = edx_2
        
        int32_t edx_3 = arg3[eax_6 * 2]
        int32_t edi_2 = *(result + arg3)
        
        if (edx_3 s< edi_2)
            arg3[eax_6 * 2] = edi_2
            *(result + arg3) = edx_3
        
        int32_t edx_4 = *(result + arg3)
        int32_t edi_3 = *arg3
        
        if (edx_4 s< edi_3)
            *(result + arg3) = edi_3
            *arg3 = edx_4
        
        int32_t edi_4 = *arg4
        void* edx_6 = arg4 - result
        int32_t ebx_2 = *edx_6
        
        if (edi_4 s< ebx_2)
            *arg4 = ebx_2
            *edx_6 = edi_4
        
        int32_t edi_5 = *(result + arg4)
        int32_t ebx_3 = *arg4
        
        if (edi_5 s< ebx_3)
            *(result + arg4) = ebx_3
            *arg4 = edi_5
        
        int32_t edi_6 = *arg4
        int32_t ebx_4 = *edx_6
        
        if (edi_6 s< ebx_4)
            *arg4 = ebx_4
            *edx_6 = edi_6
        
        int32_t* edi_8 = arg5 - (eax_6 << 3)
        void* edx_8 = arg5 - result
        int32_t ebx_5 = *edx_8
        int32_t edi_9 = *edi_8
        
        if (ebx_5 s< edi_9)
            *edx_8 = edi_9
            *edi_8 = ebx_5
        
        int32_t ebx_6 = *arg5
        int32_t edi_12 = *edx_8
        
        if (ebx_6 s< edi_12)
            *arg5 = edi_12
            *edx_8 = ebx_6
        
        int32_t edi_14 = *edx_8
        int32_t ebx_9 = *edi_8
        
        if (edi_14 s< ebx_9)
            *edx_8 = ebx_9
            *edi_8 = edi_14
        
        int32_t edi_15 = *arg4
        int32_t ebx_11 = *(result + arg3)
        
        if (edi_15 s< ebx_11)
            *arg4 = ebx_11
            *(result + arg3) = edi_15
        
        int32_t edi_16 = *edx_8
        int32_t ebx_12 = *arg4
        
        if (edi_16 s< ebx_12)
            *edx_8 = ebx_12
            *arg4 = edi_16
        
        int32_t edx_9 = *arg4
        int32_t edi_17 = *(result + arg3)
        
        if (edx_9 s< edi_17)
            *arg4 = edi_17
            *(result + arg3) = edx_9
    
    return result
}
