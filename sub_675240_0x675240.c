// 函数名称: sub_675240
// 虚拟地址: 0x675240
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_675240(void* arg1, int32_t arg2)
{
    // 第一条实际指令: void* ebx = arg1
    void* ebx = arg1
    
    if (ebx != 0)
        void* edi_1 = *(ebx + 0x1c)
        
        if (edi_1 != 0)
            int32_t esi = arg2
            
            if (esi s>= 0)
                arg1 = (esi s>> 4) + 1
                
                if (esi s< 0x30)
                    esi &= 0xf
            else
                arg1 = nullptr
                esi = neg.d(esi)
            
            if (esi == 0)
            label_67528b:
                int32_t eax_4 = *(edi_1 + 0x34)
                
                if (eax_4 != 0 && *(edi_1 + 0x24) != esi)
                    (*(ebx + 0x24))(*(ebx + 0x28), eax_4)
                    *(edi_1 + 0x34) = 0
                
                *(edi_1 + 8) = arg1
                *(edi_1 + 0x24) = esi
                void* eax_6 = *(ebx + 0x1c)
                
                if (eax_6 != 0)
                    *(eax_6 + 0x28) = 0
                    *(eax_6 + 0x2c) = 0
                    *(eax_6 + 0x30) = 0
                    return sub_675190(ebx)
            else if (esi s>= 8 && esi s<= 0xf)
                goto label_67528b
    
    return 0xfffffffe
}
