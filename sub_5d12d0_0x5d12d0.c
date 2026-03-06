// 函数名称: sub_5d12d0
// 虚拟地址: 0x5d12d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_5d12d0(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t result = 0xffffffff
    int32_t result = 0xffffffff
    
    if (arg1 != 0)
        return sub_5d1260(arg1, arg2)
    
    int32_t ecx = data_bee778
    
    if (ecx == 0)
        return 0xffffffff
    
    int32_t i = 0
    
    if (ecx s> 0)
        void* esi_1 = nullptr
        
        do
            result = sub_5d1260(esi_1 + data_3168018, arg2)
            
            if (result s< 0)
                return 0xffffffff
            
            i += 1
            esi_1 += 0x2028
        while (i s< data_bee778)
    
    return result
}
