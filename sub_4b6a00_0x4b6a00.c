// 函数名称: sub_4b6a00
// 虚拟地址: 0x4b6a00
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __fastcallsub_4b6a00(void* arg1, void* arg2)
{
    // 第一条实际指令: if (*(arg1 + 0x1dc) == 2)
    if (*(arg1 + 0x1dc) == 2)
        char const* const var_8 = "**game name**"
        int32_t var_c = *(arg1 + 0x1d4)
        void* var_10 = arg2 + 0x10
        int32_t var_14 = *(arg2 + 4)
        return sub_4c57f0("player (%d, %s) abandoned active game (%d, %s)")
    
    int32_t eax = 0
    void* eax_1
    
    if (*(arg1 + 0x140) s<= 0)
    label_4b6a30:
        eax_1 = nullptr
    else
        void* edx = arg1
        
        while (*edx != *(arg2 + 4))
            eax += 1
            edx += 0x50
            
            if (eax s>= *(arg1 + 0x140))
                goto label_4b6a30
        
        eax_1 = eax * 0x50 + arg1
    
    *(eax_1 + 0x30) = 1
    int32_t eax_2 = *(arg1 + 0x1dc)
    
    if (eax_2 != 4 && eax_2 != 6)
        *(arg1 + 0x1dc) = 4
    
    return sub_4b6cc0(arg1) __tailcall
}
