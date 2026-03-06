// 函数名称: sub_646c50
// 虚拟地址: 0x646c50
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_646c50(int32_t* arg1 @ esi, int32_t* arg2)
{
    // 第一条实际指令: int32_t i_3
    int32_t i_3
    int32_t edx
    i_3, edx = sub_68b0a0(arg2, 0x20)
    int32_t i_2 = i_3
    
    if (i_2 s>= 0)
        int32_t eax_1 = arg2[4] - 8
        
        if (i_2 s<= eax_1)
            char* eax_2 = _calloc(eax_1, edx, i_2 + 1, i_2 + 1, 1)
            arg1[3] = eax_2
            char* ebx_1 = eax_2
            
            if (i_2 != 0)
                int32_t i
                
                do
                    *ebx_1 = sub_68b0a0(arg2, 8)
                    ebx_1 = &ebx_1[1]
                    i = i_2
                    i_2 -= 1
                while (i != 1)
            
            int32_t* ebx_2 = arg2
            int32_t eax_4 = sub_68b0a0(ebx_2, 0x20)
            
            if (eax_4 s>= 0)
                int32_t eax_5
                int32_t edx_2
                eax_5, edx_2 = sub_68b1a0(ebx_2)
                int32_t ecx_4 = (ebx_2[4] - eax_5) s>> 2
                
                if (eax_4 s<= ecx_4)
                    arg1[2] = eax_4
                    int32_t eax_6
                    int32_t ecx_5
                    int32_t edx_3
                    eax_6, ecx_5, edx_3 = _calloc(eax_5, edx_2, ecx_4, eax_4 + 1, 4)
                    *arg1 = eax_6
                    int32_t i_1 = 0
                    arg1[1] = _calloc(eax_6, edx_3, ecx_5, eax_4 + 1, 4)
                    
                    if (arg1[2] s> 0)
                        do
                            int32_t eax_8 = sub_68b0a0(ebx_2, 0x20)
                            
                            if (eax_8 s< 0)
                                goto label_646d68
                            
                            int32_t eax_9 = sub_68b1a0(arg2)
                            int32_t edx_6 = arg2[4] - eax_9
                            
                            if (eax_8 s> edx_6)
                                goto label_646d68
                            
                            int32_t eax_10 = arg1[1]
                            *(eax_10 + (i_1 << 2)) = eax_8
                            int32_t eax_11 = _calloc(eax_10, edx_6, eax_8 + 1, eax_8 + 1, 1)
                            int32_t edx_7 = *arg1
                            *(edx_7 + (i_1 << 2)) = eax_11
                            ebx_2 = arg2
                            sub_646560(eax_8, edx_7, *(*arg1 + (i_1 << 2)))
                            i_1 += 1
                        while (i_1 s< arg1[2])
                    
                    if (sub_68b0a0(ebx_2, 1) == 1)
                        return 0
    
    label_646d68:
    sub_646920(arg1)
    return 0xffffff7b
}
