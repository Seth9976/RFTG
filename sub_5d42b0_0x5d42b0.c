// 函数名称: sub_5d42b0
// 虚拟地址: 0x5d42b0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5d42b0(int32_t arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t esi = arg1
    int32_t esi = arg1
    
    if (esi == 0)
        void* const __saved_ebx = &data_87f854
        sub_5cce60("Parameter '%s' is invalid")
        return 0xffffffff
    
    int32_t* edi = sub_600f60()
    int32_t ebx
    
    if (edi == 0)
        ebx = 0
    label_5d42f1:
        void* var_14_1 = ((esi + 4) << 3) + 4
        int32_t* var_18_1 = edi
        edi = sub_5d0ae0()
        
        if (edi == 0)
            sub_5cd050(0)
            return 0xffffffff
        
        *edi = esi + 4
        
        if (ebx u< esi + 4)
            void* eax_3 = &edi[ebx * 2 + 2]
            int32_t i_1 = esi + 4 - ebx
            int32_t i
            
            do
                *(eax_3 - 4) = 0
                *eax_3 = 0
                eax_3 += 8
                i = i_1
                i_1 -= 1
            while (i != 1)
        
        if (sub_600ff0(edi) != 0)
            return 0xffffffff
        
        esi = arg1
    else
        ebx = *edi
        
        if (esi u> ebx)
            goto label_5d42f1
    edi[esi * 2 - 1] = arg2
    edi[esi * 2] = arg3
    return 0
}
