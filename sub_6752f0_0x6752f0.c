// 函数名称: sub_6752f0
// 虚拟地址: 0x6752f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_6752f0(void* arg1, int32_t arg2, char* arg3, int32_t arg4)
{
    // 第一条实际指令: if (arg3 != 0)
    if (arg3 != 0)
        char* eax
        eax.b = *arg3
        
        if (eax.b == (*"1.2.7")[0] && arg4 == 0x38)
            if (arg1 == 0)
                return 0xfffffffe
            
            *(arg1 + 0x18) = 0
            
            if (*(arg1 + 0x20) == 0)
                *(arg1 + 0x20) = sub_678650
                *(arg1 + 0x28) = 0
            
            if (*(arg1 + 0x24) == 0)
                *(arg1 + 0x24) = std::_Pocma<class std::allocator<uint16_t> >
            
            void* eax_2 = (*(arg1 + 0x20))(*(arg1 + 0x28), 1, 0x1bcc)
            
            if (eax_2 == 0)
                return 0xfffffffc
            
            *(arg1 + 0x1c) = eax_2
            *(eax_2 + 0x34) = 0
            int32_t result = sub_675240(arg1, arg2)
            
            if (result != 0)
                (*(arg1 + 0x24))(*(arg1 + 0x28), eax_2)
                *(arg1 + 0x1c) = 0
            
            return result
    
    return 0xfffffffa
}
