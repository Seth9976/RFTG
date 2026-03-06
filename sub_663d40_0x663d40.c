// 函数名称: sub_663d40
// 虚拟地址: 0x663d40
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_663d40(char* arg1, int32_t arg2, int32_t arg3, char* arg4)
{
    // 第一条实际指令: int32_t i = arg3
    int32_t i = arg3
    
    if (arg1 != 0 && i u< arg2)
        if (arg4 != 0)
            char ecx = *arg4
            
            if (ecx != 0)
                void* edx_2 = arg4 - i
                
                while (i u< arg2 - 1)
                    arg1[i] = ecx
                    ecx = *(edx_2 + i + 1)
                    i += 1
                    
                    if (ecx == 0)
                        break
        
        arg1[i] = 0
    
    return i
}
