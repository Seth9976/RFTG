// 函数名称: zip_fopen_index_encrypted
// 虚拟地址: 0x5c2ce0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void**zip_fopen_index_encrypted(int32_t* arg1, int32_t arg2, int32_t* arg3, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t* eax_2 = sub_5c27b0(arg1, arg1, arg2, arg3, arg4, 0, 0, 0, 0, arg5)
    int32_t* eax_2 = sub_5c27b0(arg1, arg1, arg2, arg3, arg4, 0, 0, 0, 0, arg5)
    
    if (eax_2 != 0)
        if (zip_source_open(eax_2) s>= 0)
            void** result = sub_5c2c90(arg1)
            
            if (result != 0)
                result[5] = eax_2
                return result
            
            zip_source_free(eax_2)
            return 0
        
        sub_5bf050(&arg1[2], eax_2)
        zip_source_free(eax_2)
    
    return 0
}
