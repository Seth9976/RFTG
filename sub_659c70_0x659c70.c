// 函数名称: sub_659c70
// 虚拟地址: 0x659c70
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_659c70(int32_t arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    int32_t* edi = arg1
    int32_t i_2 = 0
    int32_t i_3 = 0
    sub_68b1d0(arg2, *edi, 0x18)
    sub_68b1d0(arg2, edi[1], 0x18)
    sub_68b1d0(arg2, edi[2] - 1, 0x18)
    sub_68b1d0(arg2, edi[3] - 1, 6)
    int32_t i
    int32_t ecx_3
    i, ecx_3 = sub_68b1d0(arg2, edi[5], 8)
    arg1 = 0
    
    if (edi[3] s> 0)
        void* ebx = &edi[6]
        
        do
            uint32_t j_2 = *ebx
            uint32_t j = j_2
            int32_t edx_2 = 0
            
            if (j == 0)
                sub_68b1d0(arg2, j_2, 4)
            else
                do
                    edx_2 += 1
                    j u>>= 1
                while (j != 0)
                
                if (edx_2 s<= 3)
                    sub_68b1d0(arg2, j_2, 4)
                else
                    sub_68b1d0(arg2, j_2, 3)
                    sub_68b1d0(arg2, 1, 1)
                    sub_68b1d0(arg2, *ebx s>> 3, 5)
            
            uint32_t j_1 = *ebx
            int32_t ecx_5 = 0
            
            for (; j_1 != 0; j_1 u>>= 1)
                ecx_5 += j_1 & 1
            
            i_3 += ecx_5
            i = arg1 + 1
            ebx += 4
            arg1 = i
        while (i s< edi[3])
        
        i_2 = i_3
    
    if (i_2 s> 0)
        void* edi_2 = &edi[0x46]
        int32_t i_1
        
        do
            i = sub_68b1d0(arg2, *edi_2, 8)
            edi_2 += 4
            i_1 = i_2
            i_2 -= 1
        while (i_1 != 1)
    
    return i
}
