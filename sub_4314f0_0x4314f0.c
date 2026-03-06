// 函数名称: sub_4314f0
// 虚拟地址: 0x4314f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

float*sub_4314f0(float* arg1, int32_t arg2, int32_t arg3, float* arg4)
{
    // 第一条实际指令: void* edx = *(data_27e7a40 + 0x548)
    void* edx = *(data_27e7a40 + 0x548)
    int32_t edi = 0
    int32_t ebx = 0
    int32_t esi = 0
    int32_t var_8 = 0xffffffff
    void* eax = nullptr
    int32_t var_6c[0x14]
    
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
                
                if (*(eax + 0x64) != arg2)
                    break
                
                var_6c[esi] = eax
                esi += 1
                break
            
            eax += 0xb0
            
            if (eax u>= ecx_3)
                goto label_43156d
    
    label_43156d:
    int32_t __saved_ebp
    sub_4641a0(&var_6c, &(&__saved_ebp)[esi - 0x1a], (&(&__saved_ebp)[esi - 0x1a] - &var_6c) s>> 2, 
        sub_431380)
    int32_t ecx_4 = 0
    
    if (esi s> 0)
        do
            int32_t eax_3 = *(var_6c[ecx_4] + 0x84)
            
            if (eax_3 s>= 0xc)
                if (eax_3 == arg3)
                    var_8 = ebx + edi
                
                ebx += 1
            else
                if (eax_3 == arg3)
                    var_8 = edi
                
                edi += 1
            
            ecx_4 += 1
        while (ecx_4 s< esi)
    
    float var_1c[0x5]
    float* eax_7 =
        sub_467ff0(ebx - var_8 + edi - 1, arg2, arg4, &var_1c, ebx - var_8 + edi - 1, edi, ebx)
    *arg1 = *eax_7
    arg1[1] = eax_7[1]
    int32_t eax_8 = eax_7[3]
    arg1[2] = eax_7[2]
    arg1[3] = eax_8
    return arg1
}
