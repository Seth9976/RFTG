// 函数名称: sub_4c7680
// 虚拟地址: 0x4c7680
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_4c7680(int32_t* arg1, int32_t* arg2 @ edi)
{
    // 第一条实际指令: sub_4c4590(&data_83f3d3)
    sub_4c4590(&data_83f3d3)
    int128_t* ecx = *arg2
    char* ebx_1 = ecx
    char i = *ebx_1
    
    while (i != 0)
        if (i != 0xd)
            if (i == 0xa)
                *arg2 = &ebx_1[1]
                sub_4c4690(arg1, ecx)
                int32_t eax_2
                eax_2.b = 1
                return eax_2
        else if (ebx_1[1] == 0xa)
            *arg2 = &ebx_1[2]
            sub_4c4690(arg1, ecx)
            int32_t eax_1
            eax_1.b = 1
            return eax_1
        
        i = ebx_1[1]
        ebx_1 = &ebx_1[1]
    
    return 0
}
