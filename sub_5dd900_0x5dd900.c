// 函数名称: sub_5dd900
// 虚拟地址: 0x5dd900
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t (**sub_5dd900(char* arg1, char* arg2))(void* arg1)
{
    // 第一条实际指令: if (arg1 == 0 || *arg1 == 0 || arg2 == 0 || *arg2 == 0)
    if (arg1 == 0 || *arg1 == 0 || arg2 == 0 || *arg2 == 0)
        sub_5cce60("SDL_RWFromFile(): No file or no mode specified")
        return 0
    
    int32_t (** result)(void* arg1) = sub_5dd820()
    
    if (result != 0)
        if (sub_5dd2a0(arg2, result, arg1) s>= 0)
            *result = sub_5dd440
            result[1] = sub_5dd4a0
            result[2] = sub_5dd570
            result[3] = sub_5dd660
            result[4] = sub_5dd8a0
            result[5] = 1
            return result
        
        int32_t (** result_1)(void* arg1) = result
        sub_5dd850()
    
    return 0
}
