// 函数名称: sub_680bc0
// 虚拟地址: 0x680bc0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_680bc0(int32_t* arg1, int32_t arg2, int32_t* arg3)
{
    // 第一条实际指令: int32_t* i = arg3
    int32_t* i = arg3
    int32_t* ebx = arg1
    void** edi = *i
    arg3 = nullptr
    
    if (ebx[0x4e] s> 0)
        int32_t* edx_2 = arg2 - edi
        arg1 = edx_2
        
        do
            void* eax = *edi
            char* esi_1 = *(edx_2 + edi)
            void* ecx_2 = ebx[0x1c] + eax
            
            if (eax u< ecx_2)
                do
                    edx_2.b = *esi_1
                    *eax = edx_2.b
                    *(eax + 1) = edx_2.b
                    eax += 2
                    esi_1 = &esi_1[1]
                while (eax u< ecx_2)
                
                edx_2 = arg1
            
            i = arg3 + 1
            edi = &edi[1]
            arg3 = i
        while (i s< ebx[0x4e])
    
    return i
}
