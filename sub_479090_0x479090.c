// 函数名称: sub_479090
// 虚拟地址: 0x479090
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_479090(char arg1)
{
    // 第一条实际指令: sub_4075c0()
    sub_4075c0()
    int32_t esi = 1
    
    if (data_30d7278 != 0)
        esi = 4
    else
        void* ecx_1 = data_27e7a40
        int32_t eax_1 = *(ecx_1 + 0x2c4960)
        
        if (eax_1 == 1)
            int32_t esi_1 = data_27c06d4
            sub_407670()
            return esi_1
        
        if (eax_1 == 4)
            int32_t esi_2 = data_27d40e0
            sub_407670()
            return esi_2
        
        if (eax_1 == 2)
            int32_t esi_3 = *(sub_404690(ecx_1 + 0x2c495c) + 0x140)
            sub_407670()
            return esi_3
        
        if (arg1 != 0)
            if (data_30d7004 != 0)
                esi = 2
            
            if (data_30d70a8 != 0 && esi s<= 3)
                esi = 3
            
            if (data_30d714c != 0 && esi s<= 4)
                esi = 4
    
    sub_407670()
    return esi
}
