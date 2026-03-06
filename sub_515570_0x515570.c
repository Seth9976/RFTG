// 函数名称: sub_515570
// 虚拟地址: 0x515570
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_515570(void* arg1, int32_t* arg2 @ esi)
{
    // 第一条实际指令: void* eax = *(arg1 + 0x2c)
    void* eax = *(arg1 + 0x2c)
    void** i = *(eax + 4)
    
    while (i != 0)
        void** i_1 = i
        
        if (i == 0)
            sub_4c5870("iter != NULL", &data_83f3d3, "c:\ax2010\engine\xList.h", 0x1a1, 
                "XList<struct AnimSet *>::GetNextIter")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        void** ecx_1 = *i
        i = i[1]
        
        if (ecx_1 == *arg2)
            int32_t result = sub_4e7520(eax + 4, sub_5154b0(eax, i, ecx_1), i_1)
            *arg2 = 0
            return result
    
    sub_4c5870("Halt", &data_83f3d3, "Animation.cpp", 0x98, "AnimationFreeSet")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
