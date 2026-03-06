// 函数名称: sub_5c3e50
// 虚拟地址: 0x5c3e50
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5c3e50(int32_t* arg1, int32_t* arg2, int32_t* arg3, int32_t arg4, int32_t arg5, int32_t arg6)
{
    // 第一条实际指令: switch (arg6)
    switch (arg6)
        case 0
            int32_t eax_2
            int32_t edx_1
            eax_2, edx_1 = zip_source_read(arg1, &arg2[8], 0x2000, 0)
            
            if (edx_1 s<= 0 && (edx_1 s< 0 || eax_2 u< 0))
                sub_5bf050(arg2, arg1)
                return 0xffffffff
            
            arg2[0x810] = 0
            arg2[0x811] = 0
            arg2[0x812] = 0
            arg2[0x808] = &arg2[8]
            arg2[0x809] = eax_2
            int32_t eax_3 = sub_6752f0(&arg2[0x808], 0xfffffff1, "1.2.8", 0x38)
            
            if (eax_3 == 0)
                return 0
            
            zip_error_set(arg2, 0xd, eax_3)
            return 0xffffffff
        case 1
            return sub_5c3c90(arg2, arg1, arg3, arg4, arg5)
        case 2
            sub_676a10(&arg2[0x808])
            return 0
        case 3
            arg3[0xd].w = 0
            
            if (arg3[9] u> 0 || arg3[8] u> 0)
                int32_t ecx_6 = arg3[7]
                int32_t edx_8 = arg3[6]
                
                if (ecx_6 != 0 || edx_8 != 0)
                    arg3[8] = edx_8
                    arg3[9] = ecx_6
            
            return 0
        case 4
            return zip_error_to_data(arg2, arg3, arg4, arg5)
        case 5
            __free_base(arg2)
            return 0
        case 0xe
            int32_t __saved_edi_4 = 0xffffffff
            int32_t var_10_4 = 5
            int32_t var_14_3 = 4
            int32_t var_18_4 = 3
            int32_t var_1c_2 = 2
            return zip_source_make_command_bitmap(0, 1)
    
    zip_error_set(arg2, 0x1c, 0)
    return 0xffffffff
}
