// 函数名称: sub_41e810
// 虚拟地址: 0x41e810
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_41e810(int32_t arg1, int32_t* arg2, int32_t* arg3)
{
    // 第一条实际指令: int32_t* edx = arg3
    int32_t* edx = arg3
    int32_t* esi = arg2
    *esi = 0
    int32_t ebx = 0
    *edx = 0
    void* edi = nullptr
    int32_t var_54[0x14]
    
    while (true)
        void* ecx_1 = *(data_27e7a40 + 0x548)
        
        if (edi != 0)
            edi += 0xb0
        else
            edi = *(ecx_1 + 0x43960)
        
        int32_t eax_4 = *(ecx_1 + 0x43964) * 0xb0 + *(ecx_1 + 0x43960)
        
        if (edi u>= eax_4)
            break
        
        while (true)
            if ((*(edi + 0xac) & 0xffff0000) != 0)
                if (*edi != 4)
                    break
                
                int32_t eax_6
                
                if (arg1 != 0xffffffff)
                    eax_6 = *sub_46b2b0(arg1)
                    edx = arg3
                    esi = arg2
                else
                    eax_6 = arg1
                
                if (*(edi + 0x64) != eax_6)
                    break
                
                var_54[ebx] = edi
                ebx += 1
                break
            
            edi += 0xb0
            
            if (edi u>= eax_4)
                goto label_41e878
    
    label_41e878:
    int32_t result = 0
    
    if (ebx s> 0)
        do
            if (*(var_54[result] + 0x84) s>= 0xc)
                *edx += 1
            else
                *esi += 1
            
            result += 1
        while (result s< ebx)
    
    return result
}
