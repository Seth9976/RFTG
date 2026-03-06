// 函数名称: _strnlen
// 虚拟地址: 0x5bafec
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t_strnlen(char* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t result = 0
    int32_t result = 0
    
    if (arg2 u> 0)
        char* ecx_1 = arg1
        
        while (*ecx_1 != 0)
            result += 1
            ecx_1 = &ecx_1[1]
            
            if (result u>= arg2)
                break
    
    return result
}
