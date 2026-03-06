// 函数名称: sub_544a20
// 虚拟地址: 0x544a20
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __fastcallsub_544a20(void* arg1)
{
    // 第一条实际指令: if (*(arg1 + 0x4240) != 0)
    if (*(arg1 + 0x4240) != 0)
        sub_54b6c0(arg1 + 0x4240)
        int32_t eax_2 = *(arg1 + 0x4240)
        
        if (eax_2 != 0)
            _aligned_free_base(eax_2)
        
        __builtin_memset(arg1 + 0x4240, 0, 0x14)
        *(arg1 + 0x4258) = 0
    
    if (*(arg1 + 4) != 0)
        wglMakeCurrent(nullptr, nullptr)
        wglDeleteContext(*(arg1 + 4))
        HDC hDC = *(arg1 + 8)
        HWND hWnd = *(arg1 + 0xc)
        *(arg1 + 4) = 0
        ReleaseDC(hWnd, hDC)
        *(arg1 + 8) = 0
    
    void* eax_8 = data_307882c
    
    if (eax_8 != 0)
        sub_544b70(eax_8)
        void* edx_1 = data_26a44e4
        int32_t* esi_1 = data_307882c
        
        if (edx_1 == 0)
            sub_4f4250()
            edx_1 = data_26a44e4
        
        int32_t eax_4 = 0
        void* edi_2
        
        while (true)
            if (1 << (eax_4.b + 4) s>= 0x5040)
                edi_2 = edx_1 + eax_4 * 0x14
                break
            
            eax_4 += 1
            
            if (eax_4 s>= 7)
                edi_2 = edx_1 + 0x8c
                break
        
        eax_8 = 0xffffffff
        *(edi_2 + 0xc) -= 1
        
        if (*(edi_2 + 0x10) != 0xffffffff)
            eax_8 = sub_4f4210(edi_2, esi_1)
            
            if (eax_8.b == 0)
                sub_4c5870("IsPointerFromAllocator(pItem)", &data_83f3d3, "c:\ax2010\engine\xAlloc.h", 
                    0x81, "XAllocator::Free")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            *esi_1 = *edi_2
            *edi_2 = esi_1
        else if (esi_1 != 0)
            int32_t eax_5 = _aligned_free_base(esi_1)
            data_307882c = 0
            return eax_5
        
        data_307882c = 0
    
    return eax_8
}
