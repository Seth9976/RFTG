// 函数名称: sub_5c4000
// 虚拟地址: 0x5c4000
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_5c4000(int32_t* arg1, int32_t* arg2, int32_t* arg3, void* arg4, int32_t arg5, int32_t arg6)
{
    // 第一条实际指令: switch (arg6)
    switch (arg6)
        case 0
            int32_t ecx_1 = arg2[4]
            arg2[0x810] = 0
            arg2[0x811] = 0
            arg2[0x812] = 0
            arg2[0x809] = 0
            arg2[0x808] = 0
            arg2[0x80c] = 0
            arg2[0x80b] = 0
            int32_t eax_3
            int32_t* esi_2
            eax_3, esi_2 = sub_674f50(&arg2[0x808], 9, 8, 0xfffffff1, ecx_1, 0, "1.2.8", 0x38)
            
            if (eax_3 == 0)
                return 0
            
            zip_error_set(esi_2, 0xd, eax_3)
            return 0xffffffff
        case 1
            return sub_5c3a30(arg2, arg1, arg3, arg4, arg5)
        case 2
            sub_6732a0(&arg2[0x808])
            return 0
        case 3
            int16_t edx_4
            edx_4.b = *(arg2 + 0xe) != 0
            *arg3 |= 0x40
            arg3[0xd].w = (edx_4 - 1) & 8
            arg3[1] = arg3[1]
            
            if (arg2[3].b == 0)
                *arg3 &= 0xfffffff7
                arg3[1] = 0
                return 0
            
            arg3[8] = arg2[6]
            int32_t ecx_4 = arg2[7]
            int32_t edx_9 = arg3[1]
            *arg3 |= 8
            arg3[1] = edx_9
            arg3[9] = ecx_4
            return 0
        case 4
            return zip_error_to_data(arg2, arg3, arg4, arg5)
        case 5
            __free_base(arg2)
            return 0
        case 0xe
            return 0x3f
    
    zip_error_set(arg2, 0x14, 0)
    return 0xffffffff
}
