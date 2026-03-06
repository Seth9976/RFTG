// 函数名称: zip_source_open
// 虚拟地址: 0x5c1e00
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tzip_source_open(int32_t* arg1)
{
    // 第一条实际指令: if (arg1[0xa].b == 0)
    if (arg1[0xa].b == 0)
        if (arg1[9] != 3)
            if (arg1[8] u<= 0)
                int32_t eax_5 = *arg1
                
                if (eax_5 != 0 && zip_source_open(eax_5) s< 0)
                    sub_5bf050(&arg1[3], *arg1)
                    return 0xffffffff
                
                int32_t eax_9
                int32_t edx_1
                eax_9, edx_1 = sub_5c2f90(arg1, 0, 0, 0, 0)
                
                if (edx_1 s<= 0 && (edx_1 s< 0 || eax_9 u< 0))
                    int32_t* esi_4 = *arg1
                    
                    if (esi_4 != 0)
                        zip_source_close(esi_4)
                    
                    return 0xffffffff
            else
                int32_t eax_3 = sub_5c1ec0(arg1) & 0x40
                
                if (eax_3 == 0)
                    zip_error_set(&arg1[3], 0x1d, eax_3)
                    return 0xffffffff
            
            arg1[8] += 1
            return 0
        
        zip_error_set(&arg1[3], 0x17, 0)
    
    return 0xffffffff
}
