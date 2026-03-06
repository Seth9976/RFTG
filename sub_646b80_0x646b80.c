// 函数名称: sub_646b80
// 虚拟地址: 0x646b80
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_646b80(int32_t* arg1 @ esi, int32_t* arg2 @ edi)
{
    // 第一条实际指令: int32_t* ebx = arg2[7]
    int32_t* ebx = arg2[7]
    
    if (ebx == 0)
        return 0xffffff7f
    
    int32_t eax_1 = sub_68b0a0(arg1, 0x20)
    *arg2 = eax_1
    
    if (eax_1 != 0)
        return 0xffffff7a
    
    arg2[1] = sub_68b0a0(arg1, 8)
    arg2[2] = sub_68b0a0(arg1, 0x20)
    arg2[3] = sub_68b0a0(arg1, 0x20)
    arg2[4] = sub_68b0a0(arg1, 0x20)
    arg2[5] = sub_68b0a0(arg1, 0x20)
    *ebx = 1 << sub_68b0a0(arg1, 4)
    int32_t edx_1 = 1 << sub_68b0a0(arg1, 4)
    ebx[1] = edx_1
    
    if (arg2[2] s>= 1 && arg2[1] s>= 1)
        int32_t ebx_1 = *ebx
        
        if (ebx_1 s>= 0x40 && edx_1 s>= ebx_1 && edx_1 s<= 0x2000 && sub_68b0a0(arg1, 1) == 1)
            return 0
    
    sub_646a00(arg2)
    return 0xffffff7b
}
