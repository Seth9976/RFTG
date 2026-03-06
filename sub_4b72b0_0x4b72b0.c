// 函数名称: sub_4b72b0
// 虚拟地址: 0x4b72b0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __convention("regparm")sub_4b72b0(int32_t* arg1, void* arg2 @ esi)
{
    // 第一条实际指令: int32_t edx = *(arg2 + 0x140)
    int32_t edx = *(arg2 + 0x140)
    int32_t eax = 0
    
    if (edx s> 0)
        int32_t edi_1 = arg1[1]
        void* ecx_1 = arg2
        
        do
            if (*ecx_1 == edi_1)
                if (eax * 0x50 == neg.d(arg2))
                    break
                
                int32_t eax_6 = *(arg2 + 0x1dc)
                
                if (eax_6 == 2 || eax_6 == 3)
                    sub_4b7130(arg1)
                    return sub_4b6cc0(arg2)
                
                char const* const var_10_1 = "**game name**"
                int32_t var_14_1 = *(arg2 + 0x1d4)
                void* var_18_1 = &arg1[4]
                int32_t var_1c_1 = edi_1
                sub_4c57f0("
                    SERVER: player (%d, %s) resumed game that wasn't STARTED or COMPLETED (%d, %s)")
                return sub_4b6cc0(arg2)
            
            eax += 1
            ecx_1 += 0x50
        while (eax s< edx)
    
    char const* const var_10 = "**game name**"
    int32_t var_14 = *(arg2 + 0x1d4)
    void* var_18 = &arg1[4]
    int32_t var_1c = arg1[1]
    sub_4c57f0("SERVER: player (%d, %s) resumed game they weren't in (%d, %s)")
    return sub_4b6cc0(arg2)
}
