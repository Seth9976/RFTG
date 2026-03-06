// 函数名称: sub_505fd0
// 虚拟地址: 0x505fd0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_505fd0(int32_t* arg1 @ esi)
{
    // 第一条实际指令: char* eax_2 = *arg1
    char* eax_2 = *arg1
    arg1[3] = 0
    
    if (eax_2 == 0 || *eax_2 == 0)
        arg1[1] = 0
        return 0
    
    int32_t result = *(sub_4c4060(arg1) + 8)
    arg1[1] = result
    return result
}
