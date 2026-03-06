// 函数名称: sub_67b8a0
// 虚拟地址: 0x67b8a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_tsub_67b8a0(int32_t* arg1 @ esi)
{
    // 第一条实际指令: int32_t eax = arg1[0x52]
    int32_t eax = arg1[0x52]
    
    if (eax == 1)
        void* ecx_1 = arg1[0x53]
        arg1[0x57] = *(ecx_1 + 0x1c)
        arg1[0x58] = *(ecx_1 + 0x20)
        uint32_t edi_1 = *(ecx_1 + 0xc)
        *(ecx_1 + 0x40) = *(ecx_1 + 0x24)
        int32_t eax_3 = *(ecx_1 + 0x20)
        int32_t edx_2 = 0
        uint32_t edx_3 = modu.dp.d(edx_2:eax_3, edi_1)
        *(ecx_1 + 0x34) = 1
        *(ecx_1 + 0x38) = 1
        *(ecx_1 + 0x3c) = 1
        *(ecx_1 + 0x44) = 1
        
        if (edx_3 == 0)
            edx_3 = edi_1
        
        *(ecx_1 + 0x48) = edx_3
        arg1[0x59] = 1
        arg1[0x5a] = 0
        return divu.dp.d(edx_2:eax_3, edi_1)
    
    if (eax s<= 0 || eax s> 4)
        *(*arg1 + 0x14) = 0x1a
        *(*arg1 + 0x18) = arg1[0x52]
        *(*arg1 + 0x1c) = 4
        (**arg1)(arg1)
    
    int32_t eax_7 = sub_67d170(arg1[7], arg1[0x4d] * 8)
    int32_t ecx_8 = arg1[8]
    arg1[0x57] = eax_7
    int32_t i = sub_67d170(ecx_8, arg1[0x4e] * 8)
    arg1[0x58] = i
    arg1[0x59] = 0
    int32_t i_1 = 0
    
    if (arg1[0x52] s> 0)
        void* var_c_1 = &arg1[0x53]
        
        do
            void* ecx_9 = *var_c_1
            uint32_t edi_2 = *(ecx_9 + 8)
            int32_t eax_13 = *(ecx_9 + 0x1c)
            int32_t ebx_1 = *(ecx_9 + 0xc)
            *(ecx_9 + 0x40) = *(ecx_9 + 0x24) * edi_2
            uint32_t edx_11 = modu.dp.d(0:eax_13, edi_2)
            *(ecx_9 + 0x38) = ebx_1
            int32_t j_1 = ebx_1 * edi_2
            *(ecx_9 + 0x34) = edi_2
            *(ecx_9 + 0x3c) = j_1
            
            if (edx_11 == 0)
                edx_11 = edi_2
            
            int32_t eax_15 = *(ecx_9 + 0x20)
            uint32_t edi_3 = *(ecx_9 + 0xc)
            *(ecx_9 + 0x44) = edx_11
            uint32_t edx_13 = modu.dp.d(0:eax_15, edi_3)
            
            if (edx_13 == 0)
                edx_13 = edi_3
            
            *(ecx_9 + 0x48) = edx_13
            
            if (arg1[0x59] + j_1 s> 0xa)
                *(*arg1 + 0x14) = 0xd
                (**arg1)(arg1)
            
            if (j_1 s> 0)
                int32_t j = j_1
                
                do
                    j -= 1
                    arg1[arg1[0x59] + 0x5a] = i_1
                    arg1[0x59] += 1
                while (j s> 0)
            
            var_c_1 += 4
            i = i_1 + 1
            i_1 = i
        while (i s< arg1[0x52])
    
    return i
}
