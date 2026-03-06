// 函数名称: sub_6472d0
// 虚拟地址: 0x6472d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_6472d0(int32_t* arg1 @ esi, int32_t* arg2)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    sub_68b1d0(arg1, 3, 8)
    int32_t i_4 = 6
    char const* const ebx = "vorbis"
    int32_t i
    
    do
        sub_68b1d0(arg1, sx.d(*ebx), 8)
        ebx = &ebx[1]
        i = i_4
        i_4 -= 1
    while (i != 1)
    sub_68b1d0(arg1, 0x2b, 0x20)
    int32_t i_2 = 0x2b
    char const* const ebx_1 = "Xiph.Org libVorbis I 20120203 (Omnipresent)"
    int32_t i_1
    
    do
        sub_68b1d0(arg1, sx.d(*ebx_1), 8)
        ebx_1 = &ebx_1[1]
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)
    int32_t* ebx_2 = arg2
    sub_68b1d0(arg1, ebx_2[2], 0x20)
    int32_t eax_4 = ebx_2[2]
    
    if (eax_4 != 0)
        int32_t i_3 = i_2
        
        if (eax_4 s> 0)
            do
                if (*(*ebx_2 + (i_2 << 2)) == 0)
                    sub_68b1d0(arg1, 0, 0x20)
                else
                    sub_68b1d0(arg1, *(ebx_2[1] + (i_2 << 2)), 0x20)
                    int32_t j_1 = *(ebx_2[1] + (i_2 << 2))
                    char* ebx_3 = *(*ebx_2 + (i_3 << 2))
                    
                    if (j_1 != 0)
                        int32_t j
                        
                        do
                            sub_68b1d0(arg1, sx.d(*ebx_3), 8)
                            ebx_3 = &ebx_3[1]
                            j = j_1
                            j_1 -= 1
                        while (j != 1)
                    
                    i_2 = i_3
                    ebx_2 = arg2
                
                i_2 += 1
                i_3 = i_2
            while (i_2 s< ebx_2[2])
    
    sub_68b1d0(arg1, 1, 1)
    return 0
}
