// 函数名称: sub_4b7250
// 虚拟地址: 0x4b7250
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __convention("regparm")sub_4b7250(void* arg1, int32_t arg2, void* arg3)
{
    // 第一条实际指令: void* var_4 = arg3
    void* var_4 = arg3
    int32_t eax = *(arg1 + 0x1dc)
    
    if (eax != 3)
        if (eax != 2)
            char const* const var_10 = "**game name**"
            int32_t var_14 = *(arg1 + 0x1d4)
            void* var_18 = arg3 + 0x10
            int32_t var_1c = *(arg3 + 4)
            sub_4c57f0("SERVER: player (%d, %s) completed game that wasn't started/completed (%d, %s)")
            return sub_4b6cc0(arg1)
        
        *(arg1 + 0x1dc) = 3
    
    sub_4b6c60(arg1)
    return sub_4b6cc0(arg1)
}
