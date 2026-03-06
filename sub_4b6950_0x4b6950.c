// 函数名称: sub_4b6950
// 虚拟地址: 0x4b6950
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_4b6950(void* arg1, int32_t arg2, void* arg3)
{
    // 第一条实际指令: int32_t esi = *(arg1 + 0x140)
    int32_t esi = *(arg1 + 0x140)
    int32_t ecx = 0
    
    if (esi s> 0)
        int32_t ebx_1 = *(arg3 + 4)
        void* edx = arg1
        
        do
            if (*edx == ebx_1)
                char const* const var_10_1 = "**game name**"
                int32_t var_14_1 = *(arg1 + 0x1d4)
                void* var_18_1 = arg3 + 0x10
                int32_t var_1c_1 = ebx_1
                return sub_4c57f0("SERVER: player (%d, %s) joined game they were already in (%d, %s)")
            
            ecx += 1
            edx += 0x50
        while (ecx s< esi)
    
    if (*(arg1 + 0x1dc) != 1)
        char const* const var_10 = "**game name**"
        int32_t var_14 = *(arg1 + 0x1d4)
        void* var_18 = arg3 + 0x10
        int32_t var_1c = *(arg3 + 4)
        return sub_4c57f0("SERVER: player (%d, %s) joined game that wasn't forming (%d, %s)")
    
    if (*(arg1 + 0x18c) == 0)
        return sub_4694e0(arg1, arg3)
    
    char const* const var_10_2 = "**game name**"
    int32_t var_14_2 = *(arg1 + 0x1d4)
    void* var_18_2 = arg3 + 0x10
    int32_t var_1c_2 = *(arg3 + 4)
    return sub_4c57f0("SERVER: player (%d, %s) joined non quickplay game (%d, %s)")
}
