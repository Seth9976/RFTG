// 函数名称: sub_673190
// 虚拟地址: 0x673190
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_673190(void* arg1)
{
    // 第一条实际指令: if (arg1 != 0)
    if (arg1 != 0)
        void* esi_1 = *(arg1 + 0x1c)
        
        if (esi_1 != 0 && *(arg1 + 0x20) != 0 && *(arg1 + 0x24) != 0)
            *(arg1 + 0x14) = 0
            *(arg1 + 8) = 0
            *(arg1 + 0x18) = 0
            *(arg1 + 0x2c) = 2
            *(esi_1 + 0x10) = *(esi_1 + 8)
            int32_t eax_1 = *(esi_1 + 0x18)
            *(esi_1 + 0x14) = 0
            
            if (eax_1 s< 0)
                *(esi_1 + 0x18) = neg.d(eax_1)
            
            int32_t eax_3 = *(esi_1 + 0x18)
            int32_t ecx_1 = neg.d(eax_3)
            *(esi_1 + 4) = (sbb.d(ecx_1, ecx_1, eax_3 != 0) & 0xffffffb9) + 0x71
            void* eax_4
            
            if (eax_3 != 2)
                eax_4 = sub_6783e0(0, nullptr, 0)
            else
                eax_4 = sub_673170(0, nullptr, 0)
            
            *(arg1 + 0x30) = eax_4
            *(esi_1 + 0x28) = 0
            sub_677c70(esi_1)
            return 0
    
    return 0xfffffffe
}
