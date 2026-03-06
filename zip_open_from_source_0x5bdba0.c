// 函数名称: zip_open_from_source
// 虚拟地址: 0x5bdba0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t**zip_open_from_source(int32_t* arg1, int32_t arg2, int32_t* arg3)
{
    // 第一条实际指令: if (arg2 s< 0 || arg1 == 0)
    if (arg2 s< 0 || arg1 == 0)
        zip_error_set(arg3, 0x12, 0)
        return 0
    
    int32_t eax_2
    int32_t edx
    eax_2, edx = sub_5c1ec0(arg1)
    int32_t esi = data_8b95a0
    int32_t edx_1 = data_8b95a4
    int32_t eax_4 = esi & edx_1
    int32_t edi
    
    if (eax_4 != 0xffffffff)
        edi = data_8b95a8
    else
        int32_t var_20_1 = eax_4
        int32_t var_24_1 = 3
        int32_t var_28_1 = 7
        int32_t var_2c_1 = 6
        int32_t var_30_1 = 2
        int32_t eax_5
        int32_t edx_2
        eax_5, edx_2 = zip_source_make_command_bitmap(0, 1)
        int32_t var_3c_1 = 0xffffffff
        int32_t var_40_1 = 0xf
        int32_t var_44_1 = 0xd
        int32_t var_48_1 = 0xc
        int32_t var_4c_1 = 0xa
        data_8b95a0 = eax_5
        data_8b95a4 = edx_2
        int32_t eax_6
        int32_t edx_3
        eax_6, edx_3 = zip_source_make_command_bitmap(8, 9)
        esi = data_8b95a0
        edi = eax_6
        data_8b95ac = edx_3
        edx_1 = data_8b95a4
        data_8b95a8 = edi
    
    if ((esi & eax_2) != esi || (edx_1 & edx) != edx_1)
        zip_error_set(arg3, 0x1c, 0)
        return 0
    
    int32_t eax_10 = data_8b95ac
    int32_t ebx_2
    
    if ((edi & eax_2) != edi || (eax_10 & edx) != eax_10)
        ebx_2 = arg2 | 0x10
    else
        ebx_2 = arg2
    
    int32_t* edx_5 = ebx_2 & 0x18
    
    if (edx_5.b == 0x18)
        zip_error_set(arg3, 0x19, 0)
        return 0
    
    int32_t* var_20_2 = arg3
    int32_t eax_14
    int32_t edx_6
    eax_14, edx_6 = sub_5bca90(arg1, edx_5)
    
    if (eax_14 != 0xffffffff)
        if (eax_14 == 0)
            if ((ebx_2.b & 1) != 0)
                int32_t* var_20_8 = arg1
                return sub_5bca60(arg3, edx_6)
            
            zip_error_set(arg3, 9, 0)
            return 0
        
        if ((ebx_2.b & 2) == 0)
            int32_t eax_15
            int32_t edx_7
            eax_15, edx_7 = zip_source_open(arg1)
            
            if (eax_15 s< 0)
                sub_5bf050(arg3, arg1)
                return 0
            
            int32_t** result
            
            if ((ebx_2.b & 8) == 0)
                result = sub_5bda40(arg1, ebx_2, arg3)
            else
                int32_t* var_20_5 = arg1
                result = sub_5bca60(arg3, edx_7)
            
            if (result != 0)
                return result
            
            zip_source_close(arg1)
            return 0
        
        zip_error_set(arg3, 0xa, 0)
    
    return nullptr
}
