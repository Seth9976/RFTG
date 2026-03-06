// 函数名称: sub_487e50
// 虚拟地址: 0x487e50
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_487e50(int32_t arg1 @ edi, int32_t arg2)
{
    // 第一条实际指令: int32_t result
    int32_t result
    
    if (*(data_27e7a40 + 0x74) != 0xffffffff && arg1 != 1)
        int32_t esi_1 = 1
        
        if (arg1 s> 1)
            do
                void* entry_ebx
                
                if (esi_1 != 0 && sub_510860(sub_487cf0(esi_1, arg1)) == *(entry_ebx + 4))
                    result.b = 1
                    return result
                
                esi_1 += 1
            while (esi_1 s< arg1)
    
    result.b = 0
    return result
}
