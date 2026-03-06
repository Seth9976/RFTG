// 函数名称: sub_4fe1b0
// 虚拟地址: 0x4fe1b0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_4fe1b0(void* arg1)
{
    // 第一条实际指令: int32_t eax = data_be1cd8
    int32_t eax = data_be1cd8
    int32_t result = eax - 1
    
    if (eax == 1)
        int32_t esi_1 = *(arg1 + 8)
        
        if ((*(*SteamUtils() + 0x44))() == 0)
            data_be1cf4 = 3
            return 3
        
        (*(*SteamFriends() + 0x7c))(esi_1, 1)
        result = 1
        data_be1cf4 = 1
    
    return result
}
