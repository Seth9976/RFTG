// 函数名称: sub_4313a0
// 虚拟地址: 0x4313a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int80_tsub_4313a0(int32_t* arg1, int32_t arg2, float* arg3)
{
    // 第一条实际指令: void* edx = *(data_27e7a40 + 0x548)
    void* edx = *(data_27e7a40 + 0x548)
    int32_t ebx = 0
    int32_t edi = 0
    int32_t esi = 0
    int32_t var_c = 0xffffffff
    void* eax = nullptr
    int32_t var_70[0x14]
    
    while (true)
        if (eax != 0)
            eax += 0xb0
        else
            eax = *(edx + 0x43960)
        
        int32_t ecx_3 = *(edx + 0x43964) * 0xb0 + *(edx + 0x43960)
        
        if (eax u>= ecx_3)
            break
        
        while (true)
            if ((*(eax + 0xac) & 0xffff0000) != 0)
                if (*eax != 4)
                    break
                
                if (*(eax + 0x64) != 0xffffffff)
                    break
                
                var_70[esi] = eax
                esi += 1
                break
            
            eax += 0xb0
            
            if (eax u>= ecx_3)
                goto label_43141d
    
    label_43141d:
    int32_t __saved_ebp
    sub_4641a0(&var_70, &(&__saved_ebp)[esi - 0x1b], (&(&__saved_ebp)[esi - 0x1b] - &var_70) s>> 2, 
        sub_431380)
    int32_t ecx_4 = 0
    
    if (esi s> 0)
        do
            int32_t eax_3 = *(var_70[ecx_4] + 0x84)
            
            if (eax_3 s>= 0xc)
                if (eax_3 == arg2)
                    var_c = edi + ebx
                
                edi += 1
            else
                if (eax_3 == arg2)
                    var_c = ebx
                
                ebx += 1
            
            ecx_4 += 1
        while (ecx_4 s< esi)
        
        if (var_c != 0xffffffff)
            float var_20[0x5]
            int32_t* eax_7
            int80_t result
            result, eax_7 = sub_467c70(&var_20, edi - var_c + ebx - 1, edi, arg3)
            *arg1 = *eax_7
            arg1[1] = eax_7[1]
            int32_t eax_8 = eax_7[3]
            arg1[2] = eax_7[2]
            arg1[3] = eax_8
            return result
    
    sub_4c5870("targetIndex != -1", &data_83f3d3, "..\code\RFTGClient.cpp", 0x23e3, "GlobalGoalRect")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
