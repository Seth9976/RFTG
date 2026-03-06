// 函数名称: sub_645df0
// 虚拟地址: 0x645df0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_645df0(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t eax = arg1[3]
    int32_t eax = arg1[3]
    int32_t* edi_1 = *arg1 + eax
    int32_t ebx_1 = arg1[2] - eax
    
    if (arg1[1] s>= 0)
        if (arg1[5] != 0)
        label_645e6f:
            
            if (arg1[5] + arg1[6] s<= ebx_1)
                int32_t* ecx_3 = *(edi_1 + 0x16)
                *(edi_1 + 0x16) = 0
                void* eax_4 = arg1[5]
                int32_t edx_4 = arg1[6]
                void* var_10_1 = eax_4
                void* var_c_1 = eax_4 + edi_1
                int32_t* var_14 = edi_1
                int32_t var_8_1 = edx_4
                sub_6456e0(&var_14)
                
                if (ecx_3 != *(edi_1 + 0x16))
                    *(edi_1 + 0x16) = ecx_3
                    goto label_645ef2
                
                int32_t eax_8 = *arg1 + arg1[3]
                
                if (arg2 != 0)
                    *arg2 = eax_8
                    arg2[1] = arg1[5]
                    arg2[2] = arg1[5] + eax_8
                    arg2[3] = arg1[6]
                
                int32_t eax_11 = arg1[5] + arg1[6]
                arg1[3] += eax_11
                arg1[4] = 0
                arg1[5] = 0
                arg1[6] = 0
                return eax_11
        else if (ebx_1 s>= 0x1b)
            if (*edi_1 != 0x5367674f)
            label_645ef2:
                arg1[5] = 0
                arg1[6] = 0
                void* ecx_6 = _memchr(edi_1 + 1, 0x4f, ebx_1 - 1)
                
                if (ecx_6 == 0)
                    ecx_6 = arg1[2] + *arg1
                
                arg1[3] = ecx_6 - *arg1
                return edi_1 - ecx_6
            
            uint32_t ecx_1 = zx.d(*(edi_1 + 0x1a))
            int32_t* edx_1 = ecx_1 + 0x1b
            void* i = nullptr
            
            if (ebx_1 s< edx_1)
                return i
            
            if (ecx_1 s> 0)
                int32_t ecx_2 = arg1[6]
                
                do
                    ecx_2 += zx.d(*(edi_1 + i + 0x1b))
                    arg1[6] = ecx_2
                    i += 1
                while (i s< zx.d(*(edi_1 + 0x1a)))
            
            arg1[5] = edx_1
            goto label_645e6f
    
    return 0
}
